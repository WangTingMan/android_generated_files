#define LOG_TAG "android.audio.policy.engine.configuration"
#include "android_audio_policy_engine_configuration.h"

#include <assert.h>
#ifndef __BIONIC__
#define __assert2(f,n,fun,e) do { fprintf(stderr, "%s:%d: %s: Assertion `%s' failed", (f), (n), (fun), (e)); abort(); } while (false)
#endif
#define _xsdc_assert(e) do if (!(e)) __assert2(__FILE__, __LINE__, __FUNCTION__, #e); while (false)

namespace android {
    namespace audio {
        namespace policy {
            namespace engine {
                namespace configuration {
                    template <class T>
                    constexpr void (*xmlDeleter)(T* t);
                    template <>
                    constexpr auto xmlDeleter<xmlDoc> = xmlFreeDoc;
                    template <>
                    auto xmlDeleter<xmlChar> = [](xmlChar *s) { xmlFree(s); };

                    template <class T>
                    constexpr auto make_xmlUnique(T *t) {
                        auto deleter = [](T *t) { xmlDeleter<T>(t); };
                        return std::unique_ptr<T, decltype(deleter)>{t, deleter};
                    }

                    static std::string getXmlAttribute(const xmlNode *cur, const char *attribute) {
                        auto xmlValue = make_xmlUnique(xmlGetProp(cur, reinterpret_cast<const xmlChar*>(attribute)));
                        if (xmlValue == nullptr) {
                            return "";
                        }
                        std::string value(reinterpret_cast<const char*>(xmlValue.get()));
                        return value;
                    }

                    std::optional<Configuration> read(const char* configFile) {
                        auto doc = make_xmlUnique(xmlParseFile(configFile));
                        if (doc == nullptr) {
                            return std::nullopt;
                        }
                        xmlNodePtr _child = xmlDocGetRootElement(doc.get());
                        if (_child == nullptr) {
                            return std::nullopt;
                        }
                        if (xmlXIncludeProcess(doc.get()) < 0) {
                            return std::nullopt;
                        }

                        if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("configuration"))) {
                            Configuration _value = Configuration::read(_child);
                            return _value;
                        }
                        return std::nullopt;
                    }

                    std::optional<Configuration> parse(const char* xml) {
                        auto doc = make_xmlUnique(xmlParseDoc(reinterpret_cast<const xmlChar*>(xml)));
                        if (doc == nullptr) {
                            return std::nullopt;
                        }
                        xmlNodePtr _child = xmlDocGetRootElement(doc.get());
                        if (_child == nullptr) {
                            return std::nullopt;
                        }
                        if (xmlXIncludeProcess(doc.get()) < 0) {
                            return std::nullopt;
                        }

                        if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("configuration"))) {
                            Configuration _value = Configuration::read(_child);
                            return _value;
                        }
                        return std::nullopt;
                    }


                    ProductStrategies::ProductStrategy::ProductStrategy(std::vector<AttributesGroup> attributesGroup, std::string name) : attributesGroup_(std::move(attributesGroup)), name_(std::move(name)) {
                    }

                    const std::vector<AttributesGroup>& ProductStrategies::ProductStrategy::getAttributesGroup() const {
                        return attributesGroup_;
                    }

                    bool ProductStrategies::ProductStrategy::hasAttributesGroup() const {
                        return !(attributesGroup_.empty());
                    }

                    const AttributesGroup* ProductStrategies::ProductStrategy::getFirstAttributesGroup() const {
                        if (attributesGroup_.empty()) {
                            return nullptr;
                        }
                        return &attributesGroup_[0];
                    }

                    const std::string& ProductStrategies::ProductStrategy::getName() const {
                        return name_;
                    }

                    bool ProductStrategies::ProductStrategy::hasName() const {
                        return true;
                    }

                    ProductStrategies::ProductStrategy ProductStrategies::ProductStrategy::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "name");
                        std::string name{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            name = _value;
                        }
                        std::vector<AttributesGroup> attributesGroup;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("AttributesGroup"))) {
                                AttributesGroup _value = AttributesGroup::read(_child);
                                attributesGroup.push_back(std::move(_value));
                            }
                        }
                        ProductStrategies::ProductStrategy instance(attributesGroup, name);
                        return instance;
                    }

                    ProductStrategies::ProductStrategies(std::vector<ProductStrategy> productStrategy) : productStrategy_(std::move(productStrategy)) {
                    }

                    const std::vector<ProductStrategies::ProductStrategy>& ProductStrategies::getProductStrategy() const {
                        return productStrategy_;
                    }

                    bool ProductStrategies::hasProductStrategy() const {
                        return !(productStrategy_.empty());
                    }

                    const ProductStrategies::ProductStrategy* ProductStrategies::getFirstProductStrategy() const {
                        if (productStrategy_.empty()) {
                            return nullptr;
                        }
                        return &productStrategy_[0];
                    }

                    ProductStrategies ProductStrategies::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<ProductStrategy> productStrategy;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("ProductStrategy"))) {
                                ProductStrategy _value = ProductStrategy::read(_child);
                                productStrategy.push_back(std::move(_value));
                            }
                        }
                        ProductStrategies instance(productStrategy);
                        return instance;
                    }

                    AttributesGroup::AttributesGroup(std::vector<AttributesType> attributes_optional, std::vector<ContentTypeType> contentType_optional, std::vector<UsageType> usage_optional, std::vector<SourceType> source_optional, std::vector<FlagsType> flags_optional, std::vector<BundleType> bundle_optional, std::optional<Stream> streamType, std::optional<std::string> volumeGroup) : attributes_optional_(std::move(attributes_optional)), contentType_optional_(std::move(contentType_optional)), usage_optional_(std::move(usage_optional)), source_optional_(std::move(source_optional)), flags_optional_(std::move(flags_optional)), bundle_optional_(std::move(bundle_optional)), streamType_(streamType), volumeGroup_(std::move(volumeGroup)) {
                    }

                    const std::vector<AttributesType>& AttributesGroup::getAttributes_optional() const {
                        return attributes_optional_;
                    }

                    bool AttributesGroup::hasAttributes_optional() const {
                        return !(attributes_optional_.empty());
                    }

                    const AttributesType* AttributesGroup::getFirstAttributes_optional() const {
                        if (attributes_optional_.empty()) {
                            return nullptr;
                        }
                        return &attributes_optional_[0];
                    }

                    const std::vector<ContentTypeType>& AttributesGroup::getContentType_optional() const {
                        return contentType_optional_;
                    }

                    bool AttributesGroup::hasContentType_optional() const {
                        return !(contentType_optional_.empty());
                    }

                    const ContentTypeType* AttributesGroup::getFirstContentType_optional() const {
                        if (contentType_optional_.empty()) {
                            return nullptr;
                        }
                        return &contentType_optional_[0];
                    }

                    const std::vector<UsageType>& AttributesGroup::getUsage_optional() const {
                        return usage_optional_;
                    }

                    bool AttributesGroup::hasUsage_optional() const {
                        return !(usage_optional_.empty());
                    }

                    const UsageType* AttributesGroup::getFirstUsage_optional() const {
                        if (usage_optional_.empty()) {
                            return nullptr;
                        }
                        return &usage_optional_[0];
                    }

                    const std::vector<SourceType>& AttributesGroup::getSource_optional() const {
                        return source_optional_;
                    }

                    bool AttributesGroup::hasSource_optional() const {
                        return !(source_optional_.empty());
                    }

                    const SourceType* AttributesGroup::getFirstSource_optional() const {
                        if (source_optional_.empty()) {
                            return nullptr;
                        }
                        return &source_optional_[0];
                    }

                    const std::vector<FlagsType>& AttributesGroup::getFlags_optional() const {
                        return flags_optional_;
                    }

                    bool AttributesGroup::hasFlags_optional() const {
                        return !(flags_optional_.empty());
                    }

                    const FlagsType* AttributesGroup::getFirstFlags_optional() const {
                        if (flags_optional_.empty()) {
                            return nullptr;
                        }
                        return &flags_optional_[0];
                    }

                    const std::vector<BundleType>& AttributesGroup::getBundle_optional() const {
                        return bundle_optional_;
                    }

                    bool AttributesGroup::hasBundle_optional() const {
                        return !(bundle_optional_.empty());
                    }

                    const BundleType* AttributesGroup::getFirstBundle_optional() const {
                        if (bundle_optional_.empty()) {
                            return nullptr;
                        }
                        return &bundle_optional_[0];
                    }

                    const Stream& AttributesGroup::getStreamType() const {
                        _xsdc_assert(hasStreamType());
                        return streamType_.value();
                    }

                    bool AttributesGroup::hasStreamType() const {
                        return streamType_.has_value();
                    }

                    const std::string& AttributesGroup::getVolumeGroup() const {
                        _xsdc_assert(hasVolumeGroup());
                        return volumeGroup_.value();
                    }

                    bool AttributesGroup::hasVolumeGroup() const {
                        return volumeGroup_.has_value();
                    }

                    AttributesGroup AttributesGroup::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "streamType");
                        std::optional<Stream> streamType = std::nullopt;
                        if (_raw != "") {
                            Stream _value = stringToStream(_raw);
                            streamType = _value;
                        }
                        _raw = getXmlAttribute(root, "volumeGroup");
                        std::optional<std::string> volumeGroup = std::nullopt;
                        if (_raw != "") {
                            std::string &_value = _raw;
                            volumeGroup = _value;
                        }
                        std::vector<AttributesType> attributes_optional;
                        std::vector<ContentTypeType> contentType_optional;
                        std::vector<UsageType> usage_optional;
                        std::vector<SourceType> source_optional;
                        std::vector<FlagsType> flags_optional;
                        std::vector<BundleType> bundle_optional;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Attributes"))) {
                                AttributesType _value = AttributesType::read(_child);
                                attributes_optional.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("ContentType"))) {
                                ContentTypeType _value = ContentTypeType::read(_child);
                                contentType_optional.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Usage"))) {
                                UsageType _value = UsageType::read(_child);
                                usage_optional.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Source"))) {
                                SourceType _value = SourceType::read(_child);
                                source_optional.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Flags"))) {
                                FlagsType _value = FlagsType::read(_child);
                                flags_optional.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Bundle"))) {
                                BundleType _value = BundleType::read(_child);
                                bundle_optional.push_back(std::move(_value));
                            }
                        }
                        AttributesGroup instance(attributes_optional, contentType_optional, usage_optional, source_optional, flags_optional, bundle_optional, streamType, volumeGroup);
                        return instance;
                    }

                    VolumeGroupsType::VolumeGroup::VolumeGroup(std::optional<std::string> name, std::optional<int> indexMin, std::optional<int> indexMax, std::vector<Volume> volume) : name_(std::move(name)), indexMin_(indexMin), indexMax_(indexMax), volume_(std::move(volume)) {
                    }

                    const std::string& VolumeGroupsType::VolumeGroup::getName() const {
                        _xsdc_assert(hasName());
                        return name_.value();
                    }

                    bool VolumeGroupsType::VolumeGroup::hasName() const {
                        return name_.has_value();
                    }

                    const int& VolumeGroupsType::VolumeGroup::getIndexMin() const {
                        _xsdc_assert(hasIndexMin());
                        return indexMin_.value();
                    }

                    bool VolumeGroupsType::VolumeGroup::hasIndexMin() const {
                        return indexMin_.has_value();
                    }

                    const int& VolumeGroupsType::VolumeGroup::getIndexMax() const {
                        _xsdc_assert(hasIndexMax());
                        return indexMax_.value();
                    }

                    bool VolumeGroupsType::VolumeGroup::hasIndexMax() const {
                        return indexMax_.has_value();
                    }

                    const std::vector<Volume>& VolumeGroupsType::VolumeGroup::getVolume() const {
                        return volume_;
                    }

                    bool VolumeGroupsType::VolumeGroup::hasVolume() const {
                        return !(volume_.empty());
                    }

                    const Volume* VolumeGroupsType::VolumeGroup::getFirstVolume() const {
                        if (volume_.empty()) {
                            return nullptr;
                        }
                        return &volume_[0];
                    }

                    VolumeGroupsType::VolumeGroup VolumeGroupsType::VolumeGroup::read(xmlNode *root) {
                        std::string _raw;
                        std::optional<std::string> name;
                        std::optional<int> indexMin;
                        std::optional<int> indexMax;
                        std::vector<Volume> volume;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("name"))) {
                                auto xmlValue = make_xmlUnique(xmlNodeListGetString(_child->doc, _child->xmlChildrenNode, 1));
                                if (xmlValue == nullptr) {
                                    _raw = "";
                                } else {
                                    _raw = reinterpret_cast<const char*>(xmlValue.get());
                                }
                                std::string &_value = _raw;
                                name = std::move(_value);
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("indexMin"))) {
                                auto xmlValue = make_xmlUnique(xmlNodeListGetString(_child->doc, _child->xmlChildrenNode, 1));
                                if (xmlValue == nullptr) {
                                    _raw = "";
                                } else {
                                    _raw = reinterpret_cast<const char*>(xmlValue.get());
                                }
                                int _value = std::stoi(_raw);
                                indexMin = std::move(_value);
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("indexMax"))) {
                                auto xmlValue = make_xmlUnique(xmlNodeListGetString(_child->doc, _child->xmlChildrenNode, 1));
                                if (xmlValue == nullptr) {
                                    _raw = "";
                                } else {
                                    _raw = reinterpret_cast<const char*>(xmlValue.get());
                                }
                                int _value = std::stoi(_raw);
                                indexMax = std::move(_value);
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("volume"))) {
                                Volume _value = Volume::read(_child);
                                volume.push_back(std::move(_value));
                            }
                        }
                        VolumeGroupsType::VolumeGroup instance(name, indexMin, indexMax, volume);
                        return instance;
                    }

                    VolumeGroupsType::VolumeGroupsType(std::vector<VolumeGroup> volumeGroup) : volumeGroup_(std::move(volumeGroup)) {
                    }

                    const std::vector<VolumeGroupsType::VolumeGroup>& VolumeGroupsType::getVolumeGroup() const {
                        return volumeGroup_;
                    }

                    bool VolumeGroupsType::hasVolumeGroup() const {
                        return !(volumeGroup_.empty());
                    }

                    const VolumeGroupsType::VolumeGroup* VolumeGroupsType::getFirstVolumeGroup() const {
                        if (volumeGroup_.empty()) {
                            return nullptr;
                        }
                        return &volumeGroup_[0];
                    }

                    VolumeGroupsType VolumeGroupsType::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<VolumeGroup> volumeGroup;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("volumeGroup"))) {
                                VolumeGroup _value = VolumeGroup::read(_child);
                                volumeGroup.push_back(std::move(_value));
                            }
                        }
                        VolumeGroupsType instance(volumeGroup);
                        return instance;
                    }

                    VolumesType::VolumesType(std::vector<VolumeRef> reference) : reference_(std::move(reference)) {
                    }

                    const std::vector<VolumeRef>& VolumesType::getReference() const {
                        return reference_;
                    }

                    bool VolumesType::hasReference() const {
                        return !(reference_.empty());
                    }

                    const VolumeRef* VolumesType::getFirstReference() const {
                        if (reference_.empty()) {
                            return nullptr;
                        }
                        return &reference_[0];
                    }

                    VolumesType VolumesType::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<VolumeRef> reference;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("reference"))) {
                                VolumeRef _value = VolumeRef::read(_child);
                                reference.push_back(std::move(_value));
                            }
                        }
                        VolumesType instance(reference);
                        return instance;
                    }

                    AttributesRef::AttributesRef(std::vector<AttributesRefType> reference) : reference_(std::move(reference)) {
                    }

                    const std::vector<AttributesRefType>& AttributesRef::getReference() const {
                        return reference_;
                    }

                    bool AttributesRef::hasReference() const {
                        return !(reference_.empty());
                    }

                    const AttributesRefType* AttributesRef::getFirstReference() const {
                        if (reference_.empty()) {
                            return nullptr;
                        }
                        return &reference_[0];
                    }

                    AttributesRef AttributesRef::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<AttributesRefType> reference;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("reference"))) {
                                AttributesRefType _value = AttributesRefType::read(_child);
                                reference.push_back(std::move(_value));
                            }
                        }
                        AttributesRef instance(reference);
                        return instance;
                    }

                    CriteriaType::CriteriaType(std::vector<CriterionType> criterion) : criterion_(std::move(criterion)) {
                    }

                    const std::vector<CriterionType>& CriteriaType::getCriterion() const {
                        return criterion_;
                    }

                    bool CriteriaType::hasCriterion() const {
                        return !(criterion_.empty());
                    }

                    const CriterionType* CriteriaType::getFirstCriterion() const {
                        if (criterion_.empty()) {
                            return nullptr;
                        }
                        return &criterion_[0];
                    }

                    CriteriaType CriteriaType::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<CriterionType> criterion;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("criterion"))) {
                                CriterionType _value = CriterionType::read(_child);
                                criterion.push_back(std::move(_value));
                            }
                        }
                        CriteriaType instance(criterion);
                        return instance;
                    }

                    CriterionType::CriterionType(std::string name, std::string type, std::optional<std::string> _default) : name_(std::move(name)), type_(std::move(type)), _default_(std::move(_default)) {
                    }

                    const std::string& CriterionType::getName() const {
                        return name_;
                    }

                    bool CriterionType::hasName() const {
                        return true;
                    }

                    const std::string& CriterionType::getType() const {
                        return type_;
                    }

                    bool CriterionType::hasType() const {
                        return true;
                    }

                    const std::string& CriterionType::get_default() const {
                        _xsdc_assert(has_default());
                        return _default_.value();
                    }

                    bool CriterionType::has_default() const {
                        return _default_.has_value();
                    }

                    CriterionType CriterionType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "name");
                        std::string name{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            name = _value;
                        }
                        _raw = getXmlAttribute(root, "type");
                        std::string type{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            type = _value;
                        }
                        _raw = getXmlAttribute(root, "default");
                        std::optional<std::string> _default = std::nullopt;
                        if (_raw != "") {
                            std::string &_value = _raw;
                            _default = _value;
                        }
                        CriterionType instance(name, type, _default);
                        return instance;
                    }

                    CriterionTypesType::CriterionTypesType(std::vector<CriterionTypeType> criterion_type) : criterion_type_(std::move(criterion_type)) {
                    }

                    const std::vector<CriterionTypeType>& CriterionTypesType::getCriterion_type() const {
                        return criterion_type_;
                    }

                    bool CriterionTypesType::hasCriterion_type() const {
                        return !(criterion_type_.empty());
                    }

                    const CriterionTypeType* CriterionTypesType::getFirstCriterion_type() const {
                        if (criterion_type_.empty()) {
                            return nullptr;
                        }
                        return &criterion_type_[0];
                    }

                    CriterionTypesType CriterionTypesType::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<CriterionTypeType> criterion_type;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("criterion_type"))) {
                                CriterionTypeType _value = CriterionTypeType::read(_child);
                                criterion_type.push_back(std::move(_value));
                            }
                        }
                        CriterionTypesType instance(criterion_type);
                        return instance;
                    }

                    CriterionTypeType::CriterionTypeType(std::vector<ValuesType> values, std::string name, PfwCriterionTypeEnum type) : values_(std::move(values)), name_(std::move(name)), type_(type) {
                    }

                    const std::vector<ValuesType>& CriterionTypeType::getValues() const {
                        return values_;
                    }

                    bool CriterionTypeType::hasValues() const {
                        return !(values_.empty());
                    }

                    const ValuesType* CriterionTypeType::getFirstValues() const {
                        if (values_.empty()) {
                            return nullptr;
                        }
                        return &values_[0];
                    }

                    const std::string& CriterionTypeType::getName() const {
                        return name_;
                    }

                    bool CriterionTypeType::hasName() const {
                        return true;
                    }

                    const PfwCriterionTypeEnum& CriterionTypeType::getType() const {
                        return type_;
                    }

                    bool CriterionTypeType::hasType() const {
                        return true;
                    }

                    CriterionTypeType CriterionTypeType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "name");
                        std::string name{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            name = _value;
                        }
                        _raw = getXmlAttribute(root, "type");
                        PfwCriterionTypeEnum type = PfwCriterionTypeEnum::UNKNOWN;
                        if (_raw != "") {
                            PfwCriterionTypeEnum _value = stringToPfwCriterionTypeEnum(_raw);
                            type = _value;
                        }
                        std::vector<ValuesType> values;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("values"))) {
                                ValuesType _value = ValuesType::read(_child);
                                values.push_back(std::move(_value));
                            }
                        }
                        CriterionTypeType instance(values, name, type);
                        return instance;
                    }

                    ValuesType::ValuesType(std::vector<ValueType> value) : value_(std::move(value)) {
                    }

                    const std::vector<ValueType>& ValuesType::getValue() const {
                        return value_;
                    }

                    bool ValuesType::hasValue() const {
                        return !(value_.empty());
                    }

                    const ValueType* ValuesType::getFirstValue() const {
                        if (value_.empty()) {
                            return nullptr;
                        }
                        return &value_[0];
                    }

                    ValuesType ValuesType::read(xmlNode *root) {
                        std::string _raw;
                        std::vector<ValueType> value;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("value"))) {
                                ValueType _value = ValueType::read(_child);
                                value.push_back(std::move(_value));
                            }
                        }
                        ValuesType instance(value);
                        return instance;
                    }

                    ValueType::ValueType(std::string literal, int64_t numerical, std::optional<std::string> android_type) : literal_(std::move(literal)), numerical_(numerical), android_type_(std::move(android_type)) {
                    }

                    const std::string& ValueType::getLiteral() const {
                        return literal_;
                    }

                    bool ValueType::hasLiteral() const {
                        return true;
                    }

                    const int64_t& ValueType::getNumerical() const {
                        return numerical_;
                    }

                    bool ValueType::hasNumerical() const {
                        return true;
                    }

                    const std::string& ValueType::getAndroid_type() const {
                        _xsdc_assert(hasAndroid_type());
                        return android_type_.value();
                    }

                    bool ValueType::hasAndroid_type() const {
                        return android_type_.has_value();
                    }

                    ValueType ValueType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "literal");
                        std::string literal{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            literal = _value;
                        }
                        _raw = getXmlAttribute(root, "numerical");
                        int64_t numerical{};
                        if (_raw != "") {
                            int64_t _value = std::stoll(_raw);
                            numerical = _value;
                        }
                        _raw = getXmlAttribute(root, "android_type");
                        std::optional<std::string> android_type = std::nullopt;
                        if (_raw != "") {
                            std::string &_value = _raw;
                            android_type = _value;
                        }
                        ValueType instance(literal, numerical, android_type);
                        return instance;
                    }

                    AttributesRefType::AttributesRefType(std::vector<AttributesType> attributes, std::string name) : attributes_(std::move(attributes)), name_(std::move(name)) {
                    }

                    const std::vector<AttributesType>& AttributesRefType::getAttributes() const {
                        return attributes_;
                    }

                    bool AttributesRefType::hasAttributes() const {
                        return !(attributes_.empty());
                    }

                    const AttributesType* AttributesRefType::getFirstAttributes() const {
                        if (attributes_.empty()) {
                            return nullptr;
                        }
                        return &attributes_[0];
                    }

                    const std::string& AttributesRefType::getName() const {
                        return name_;
                    }

                    bool AttributesRefType::hasName() const {
                        return true;
                    }

                    AttributesRefType AttributesRefType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "name");
                        std::string name{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            name = _value;
                        }
                        std::vector<AttributesType> attributes;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Attributes"))) {
                                AttributesType _value = AttributesType::read(_child);
                                attributes.push_back(std::move(_value));
                            }
                        }
                        AttributesRefType instance(attributes, name);
                        return instance;
                    }

                    AttributesType::AttributesType(std::vector<ContentTypeType> contentType, std::vector<UsageType> usage, std::vector<SourceType> source, std::vector<FlagsType> flags, std::vector<BundleType> bundle, std::optional<std::string> attributesRef) : contentType_(std::move(contentType)), usage_(std::move(usage)), source_(std::move(source)), flags_(std::move(flags)), bundle_(std::move(bundle)), attributesRef_(std::move(attributesRef)) {
                    }

                    const std::vector<ContentTypeType>& AttributesType::getContentType() const {
                        return contentType_;
                    }

                    bool AttributesType::hasContentType() const {
                        return !(contentType_.empty());
                    }

                    const ContentTypeType* AttributesType::getFirstContentType() const {
                        if (contentType_.empty()) {
                            return nullptr;
                        }
                        return &contentType_[0];
                    }

                    const std::vector<UsageType>& AttributesType::getUsage() const {
                        return usage_;
                    }

                    bool AttributesType::hasUsage() const {
                        return !(usage_.empty());
                    }

                    const UsageType* AttributesType::getFirstUsage() const {
                        if (usage_.empty()) {
                            return nullptr;
                        }
                        return &usage_[0];
                    }

                    const std::vector<SourceType>& AttributesType::getSource() const {
                        return source_;
                    }

                    bool AttributesType::hasSource() const {
                        return !(source_.empty());
                    }

                    const SourceType* AttributesType::getFirstSource() const {
                        if (source_.empty()) {
                            return nullptr;
                        }
                        return &source_[0];
                    }

                    const std::vector<FlagsType>& AttributesType::getFlags() const {
                        return flags_;
                    }

                    bool AttributesType::hasFlags() const {
                        return !(flags_.empty());
                    }

                    const FlagsType* AttributesType::getFirstFlags() const {
                        if (flags_.empty()) {
                            return nullptr;
                        }
                        return &flags_[0];
                    }

                    const std::vector<BundleType>& AttributesType::getBundle() const {
                        return bundle_;
                    }

                    bool AttributesType::hasBundle() const {
                        return !(bundle_.empty());
                    }

                    const BundleType* AttributesType::getFirstBundle() const {
                        if (bundle_.empty()) {
                            return nullptr;
                        }
                        return &bundle_[0];
                    }

                    const std::string& AttributesType::getAttributesRef() const {
                        _xsdc_assert(hasAttributesRef());
                        return attributesRef_.value();
                    }

                    bool AttributesType::hasAttributesRef() const {
                        return attributesRef_.has_value();
                    }

                    AttributesType AttributesType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "attributesRef");
                        std::optional<std::string> attributesRef = std::nullopt;
                        if (_raw != "") {
                            std::string &_value = _raw;
                            attributesRef = _value;
                        }
                        std::vector<ContentTypeType> contentType;
                        std::vector<UsageType> usage;
                        std::vector<SourceType> source;
                        std::vector<FlagsType> flags;
                        std::vector<BundleType> bundle;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("ContentType"))) {
                                ContentTypeType _value = ContentTypeType::read(_child);
                                contentType.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Usage"))) {
                                UsageType _value = UsageType::read(_child);
                                usage.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Source"))) {
                                SourceType _value = SourceType::read(_child);
                                source.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Flags"))) {
                                FlagsType _value = FlagsType::read(_child);
                                flags.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("Bundle"))) {
                                BundleType _value = BundleType::read(_child);
                                bundle.push_back(std::move(_value));
                            }
                        }
                        AttributesType instance(contentType, usage, source, flags, bundle, attributesRef);
                        return instance;
                    }

                    ContentTypeType::ContentTypeType(ContentType value) : value_(value) {
                    }

                    const ContentType& ContentTypeType::getValue() const {
                        return value_;
                    }

                    bool ContentTypeType::hasValue() const {
                        return true;
                    }

                    ContentTypeType ContentTypeType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "value");
                        ContentType value = ContentType::UNKNOWN;
                        if (_raw != "") {
                            ContentType _value = stringToContentType(_raw);
                            value = _value;
                        }
                        ContentTypeType instance(value);
                        return instance;
                    }

                    UsageType::UsageType(UsageEnumType value) : value_(value) {
                    }

                    const UsageEnumType& UsageType::getValue() const {
                        return value_;
                    }

                    bool UsageType::hasValue() const {
                        return true;
                    }

                    UsageType UsageType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "value");
                        UsageEnumType value = UsageEnumType::UNKNOWN;
                        if (_raw != "") {
                            UsageEnumType _value = stringToUsageEnumType(_raw);
                            value = _value;
                        }
                        UsageType instance(value);
                        return instance;
                    }

                    SourceType::SourceType(SourceEnumType value) : value_(value) {
                    }

                    const SourceEnumType& SourceType::getValue() const {
                        return value_;
                    }

                    bool SourceType::hasValue() const {
                        return true;
                    }

                    SourceType SourceType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "value");
                        SourceEnumType value = SourceEnumType::UNKNOWN;
                        if (_raw != "") {
                            SourceEnumType _value = stringToSourceEnumType(_raw);
                            value = _value;
                        }
                        SourceType instance(value);
                        return instance;
                    }

                    FlagsType::FlagsType(std::vector<FlagType> value) : value_(std::move(value)) {
                    }

                    const std::vector<FlagType>& FlagsType::getValue() const {
                        return value_;
                    }

                    bool FlagsType::hasValue() const {
                        return true;
                    }

                    FlagsType FlagsType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "value");
                        std::vector<FlagType> value{};
                        if (_raw != "") {
                            std::vector<FlagType> _value;
                            {
                                std::istringstream _stream(_raw);
                                for(std::string str; _stream >> str; ) {
                                    _value.push_back(stringToFlagType(str));
                                }
                            }
                            value = _value;
                        }
                        FlagsType instance(value);
                        return instance;
                    }

                    BundleType::BundleType(std::string key, std::string value) : key_(std::move(key)), value_(std::move(value)) {
                    }

                    const std::string& BundleType::getKey() const {
                        return key_;
                    }

                    bool BundleType::hasKey() const {
                        return true;
                    }

                    const std::string& BundleType::getValue() const {
                        return value_;
                    }

                    bool BundleType::hasValue() const {
                        return true;
                    }

                    BundleType BundleType::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "key");
                        std::string key{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            key = _value;
                        }
                        _raw = getXmlAttribute(root, "value");
                        std::string value{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            value = _value;
                        }
                        BundleType instance(key, value);
                        return instance;
                    }

                    Volume::Volume(std::vector<std::string> point, std::optional<DeviceCategory> deviceCategory, std::optional<std::string> ref) : point_(std::move(point)), deviceCategory_(deviceCategory), ref_(std::move(ref)) {
                    }

                    const std::vector<std::string>& Volume::getPoint() const {
                        return point_;
                    }

                    bool Volume::hasPoint() const {
                        return !(point_.empty());
                    }

                    const std::string* Volume::getFirstPoint() const {
                        if (point_.empty()) {
                            return nullptr;
                        }
                        return &point_[0];
                    }

                    const DeviceCategory& Volume::getDeviceCategory() const {
                        _xsdc_assert(hasDeviceCategory());
                        return deviceCategory_.value();
                    }

                    bool Volume::hasDeviceCategory() const {
                        return deviceCategory_.has_value();
                    }

                    const std::string& Volume::getRef() const {
                        _xsdc_assert(hasRef());
                        return ref_.value();
                    }

                    bool Volume::hasRef() const {
                        return ref_.has_value();
                    }

                    Volume Volume::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "deviceCategory");
                        std::optional<DeviceCategory> deviceCategory = std::nullopt;
                        if (_raw != "") {
                            DeviceCategory _value = stringToDeviceCategory(_raw);
                            deviceCategory = _value;
                        }
                        _raw = getXmlAttribute(root, "ref");
                        std::optional<std::string> ref = std::nullopt;
                        if (_raw != "") {
                            std::string &_value = _raw;
                            ref = _value;
                        }
                        std::vector<std::string> point;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("point"))) {
                                auto xmlValue = make_xmlUnique(xmlNodeListGetString(_child->doc, _child->xmlChildrenNode, 1));
                                if (xmlValue == nullptr) {
                                    _raw = "";
                                } else {
                                    _raw = reinterpret_cast<const char*>(xmlValue.get());
                                }
                                std::string &_value = _raw;
                                point.push_back(std::move(_value));
                            }
                        }
                        Volume instance(point, deviceCategory, ref);
                        return instance;
                    }

                    VolumeRef::VolumeRef(std::vector<std::string> point, std::string name) : point_(std::move(point)), name_(std::move(name)) {
                    }

                    const std::vector<std::string>& VolumeRef::getPoint() const {
                        return point_;
                    }

                    bool VolumeRef::hasPoint() const {
                        return !(point_.empty());
                    }

                    const std::string* VolumeRef::getFirstPoint() const {
                        if (point_.empty()) {
                            return nullptr;
                        }
                        return &point_[0];
                    }

                    const std::string& VolumeRef::getName() const {
                        return name_;
                    }

                    bool VolumeRef::hasName() const {
                        return true;
                    }

                    VolumeRef VolumeRef::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "name");
                        std::string name{};
                        if (_raw != "") {
                            std::string &_value = _raw;
                            name = _value;
                        }
                        std::vector<std::string> point;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("point"))) {
                                auto xmlValue = make_xmlUnique(xmlNodeListGetString(_child->doc, _child->xmlChildrenNode, 1));
                                if (xmlValue == nullptr) {
                                    _raw = "";
                                } else {
                                    _raw = reinterpret_cast<const char*>(xmlValue.get());
                                }
                                std::string &_value = _raw;
                                point.push_back(std::move(_value));
                            }
                        }
                        VolumeRef instance(point, name);
                        return instance;
                    }

                    Configuration::Configuration(std::vector<ProductStrategies> productStrategies, std::vector<CriterionTypesType> criterion_types, std::vector<CriteriaType> criteria, std::vector<VolumeGroupsType> volumeGroups, std::vector<VolumesType> volumes, std::vector<AttributesRef> attributesRef, Version version) : productStrategies_(std::move(productStrategies)), criterion_types_(std::move(criterion_types)), criteria_(std::move(criteria)), volumeGroups_(std::move(volumeGroups)), volumes_(std::move(volumes)), attributesRef_(std::move(attributesRef)), version_(version) {
                    }

                    const std::vector<ProductStrategies>& Configuration::getProductStrategies() const {
                        return productStrategies_;
                    }

                    bool Configuration::hasProductStrategies() const {
                        return !(productStrategies_.empty());
                    }

                    const ProductStrategies* Configuration::getFirstProductStrategies() const {
                        if (productStrategies_.empty()) {
                            return nullptr;
                        }
                        return &productStrategies_[0];
                    }

                    const std::vector<CriterionTypesType>& Configuration::getCriterion_types() const {
                        return criterion_types_;
                    }

                    bool Configuration::hasCriterion_types() const {
                        return !(criterion_types_.empty());
                    }

                    const CriterionTypesType* Configuration::getFirstCriterion_types() const {
                        if (criterion_types_.empty()) {
                            return nullptr;
                        }
                        return &criterion_types_[0];
                    }

                    const std::vector<CriteriaType>& Configuration::getCriteria() const {
                        return criteria_;
                    }

                    bool Configuration::hasCriteria() const {
                        return !(criteria_.empty());
                    }

                    const CriteriaType* Configuration::getFirstCriteria() const {
                        if (criteria_.empty()) {
                            return nullptr;
                        }
                        return &criteria_[0];
                    }

                    const std::vector<VolumeGroupsType>& Configuration::getVolumeGroups() const {
                        return volumeGroups_;
                    }

                    bool Configuration::hasVolumeGroups() const {
                        return !(volumeGroups_.empty());
                    }

                    const VolumeGroupsType* Configuration::getFirstVolumeGroups() const {
                        if (volumeGroups_.empty()) {
                            return nullptr;
                        }
                        return &volumeGroups_[0];
                    }

                    const std::vector<VolumesType>& Configuration::getVolumes() const {
                        return volumes_;
                    }

                    bool Configuration::hasVolumes() const {
                        return !(volumes_.empty());
                    }

                    const VolumesType* Configuration::getFirstVolumes() const {
                        if (volumes_.empty()) {
                            return nullptr;
                        }
                        return &volumes_[0];
                    }

                    const std::vector<AttributesRef>& Configuration::getAttributesRef() const {
                        return attributesRef_;
                    }

                    bool Configuration::hasAttributesRef() const {
                        return !(attributesRef_.empty());
                    }

                    const AttributesRef* Configuration::getFirstAttributesRef() const {
                        if (attributesRef_.empty()) {
                            return nullptr;
                        }
                        return &attributesRef_[0];
                    }

                    const Version& Configuration::getVersion() const {
                        return version_;
                    }

                    bool Configuration::hasVersion() const {
                        return true;
                    }

                    Configuration Configuration::read(xmlNode *root) {
                        std::string _raw;
                        _raw = getXmlAttribute(root, "version");
                        Version version = Version::UNKNOWN;
                        if (_raw != "") {
                            Version _value = stringToVersion(_raw);
                            version = _value;
                        }
                        std::vector<ProductStrategies> productStrategies;
                        std::vector<CriterionTypesType> criterion_types;
                        std::vector<CriteriaType> criteria;
                        std::vector<VolumeGroupsType> volumeGroups;
                        std::vector<VolumesType> volumes;
                        std::vector<AttributesRef> attributesRef;
                        for (auto *_child = root->xmlChildrenNode; _child != nullptr; _child = _child->next) {
                            if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("ProductStrategies"))) {
                                ProductStrategies _value = ProductStrategies::read(_child);
                                productStrategies.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("criterion_types"))) {
                                CriterionTypesType _value = CriterionTypesType::read(_child);
                                criterion_types.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("criteria"))) {
                                CriteriaType _value = CriteriaType::read(_child);
                                criteria.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("volumeGroups"))) {
                                VolumeGroupsType _value = VolumeGroupsType::read(_child);
                                volumeGroups.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("volumes"))) {
                                VolumesType _value = VolumesType::read(_child);
                                volumes.push_back(std::move(_value));
                            } else if (!xmlStrcmp(_child->name, reinterpret_cast<const xmlChar*>("attributesRef"))) {
                                AttributesRef _value = AttributesRef::read(_child);
                                attributesRef.push_back(std::move(_value));
                            }
                        }
                        Configuration instance(productStrategies, criterion_types, criteria, volumeGroups, volumes, attributesRef, version);
                        return instance;
                    }
                } // configuration
            } // engine
        } // policy
    } // audio
} // android
