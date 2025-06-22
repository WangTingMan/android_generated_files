#ifndef ANDROID_AUDIO_POLICY_ENGINE_CONFIGURATION_H
#define ANDROID_AUDIO_POLICY_ENGINE_CONFIGURATION_H

#include <array>
#include <map>
#include <optional>
#include <string>
#include <vector>
#include <sstream>

#if __has_include(<libxml/parser.h>)
#include <libxml/parser.h>
#include <libxml/xinclude.h>
#else
#error Require libxml2 library. Please add libxml2 to shared_libs or static_libs
#endif

#include "android_audio_policy_engine_configuration_enums.h"

namespace android {
    namespace audio {
        namespace policy {
            namespace engine {
                namespace configuration {
                    class ProductStrategies;
                    class AttributesGroup;
                    class VolumeGroupsType;
                    class VolumesType;
                    class AttributesRef;
                    class CriteriaType;
                    class CriterionType;
                    class CriterionTypesType;
                    class CriterionTypeType;
                    class ValuesType;
                    class ValueType;
                    class AttributesRefType;
                    class AttributesType;
                    class ContentTypeType;
                    class UsageType;
                    class SourceType;
                    class FlagsType;
                    class BundleType;
                    class Volume;
                    class VolumeRef;
                    class Configuration;
                    std::optional<Configuration> read(const char* configFile);

                    std::optional<Configuration> parse(const char* xml);

                    class ProductStrategies {
                        public:
                        class ProductStrategy {
                            private:
                            const std::vector<AttributesGroup> attributesGroup_;
                            const std::string name_;
                            public:
                            ProductStrategy(std::vector<AttributesGroup> attributesGroup, std::string name);
                            const std::vector<AttributesGroup>& getAttributesGroup() const;
                            bool hasAttributesGroup() const;
                            const AttributesGroup* getFirstAttributesGroup() const;
                            const std::string& getName() const;
                            bool hasName() const;
                            static ProductStrategies::ProductStrategy read(xmlNode *root);
                        };


                        private:
                        const std::vector<ProductStrategies::ProductStrategy> productStrategy_;
                        public:
                        explicit ProductStrategies(std::vector<ProductStrategy> productStrategy);
                        const std::vector<ProductStrategies::ProductStrategy>& getProductStrategy() const;
                        bool hasProductStrategy() const;
                        const ProductStrategies::ProductStrategy* getFirstProductStrategy() const;
                        static ProductStrategies read(xmlNode *root);
                    };

                    class AttributesGroup {
                        private:
                        const std::vector<AttributesType> attributes_optional_;
                        const std::vector<ContentTypeType> contentType_optional_;
                        const std::vector<UsageType> usage_optional_;
                        const std::vector<SourceType> source_optional_;
                        const std::vector<FlagsType> flags_optional_;
                        const std::vector<BundleType> bundle_optional_;
                        const std::optional<Stream> streamType_;
                        const std::optional<std::string> volumeGroup_;
                        public:
                        AttributesGroup(std::vector<AttributesType> attributes_optional, std::vector<ContentTypeType> contentType_optional, std::vector<UsageType> usage_optional, std::vector<SourceType> source_optional, std::vector<FlagsType> flags_optional, std::vector<BundleType> bundle_optional, std::optional<Stream> streamType, std::optional<std::string> volumeGroup);
                        const std::vector<AttributesType>& getAttributes_optional() const;
                        bool hasAttributes_optional() const;
                        const AttributesType* getFirstAttributes_optional() const;
                        const std::vector<ContentTypeType>& getContentType_optional() const;
                        bool hasContentType_optional() const;
                        const ContentTypeType* getFirstContentType_optional() const;
                        const std::vector<UsageType>& getUsage_optional() const;
                        bool hasUsage_optional() const;
                        const UsageType* getFirstUsage_optional() const;
                        const std::vector<SourceType>& getSource_optional() const;
                        bool hasSource_optional() const;
                        const SourceType* getFirstSource_optional() const;
                        const std::vector<FlagsType>& getFlags_optional() const;
                        bool hasFlags_optional() const;
                        const FlagsType* getFirstFlags_optional() const;
                        const std::vector<BundleType>& getBundle_optional() const;
                        bool hasBundle_optional() const;
                        const BundleType* getFirstBundle_optional() const;
                        const Stream& getStreamType() const;
                        bool hasStreamType() const;
                        const std::string& getVolumeGroup() const;
                        bool hasVolumeGroup() const;
                        static AttributesGroup read(xmlNode *root);
                    };

                    class VolumeGroupsType {
                        public:
                        class VolumeGroup {
                            private:
                            const std::optional<std::string> name_;
                            const std::optional<int> indexMin_;
                            const std::optional<int> indexMax_;
                            const std::vector<Volume> volume_;
                            public:
                            VolumeGroup(std::optional<std::string> name, std::optional<int> indexMin, std::optional<int> indexMax, std::vector<Volume> volume);
                            const std::string& getName() const;
                            bool hasName() const;
                            const int& getIndexMin() const;
                            bool hasIndexMin() const;
                            const int& getIndexMax() const;
                            bool hasIndexMax() const;
                            const std::vector<Volume>& getVolume() const;
                            bool hasVolume() const;
                            const Volume* getFirstVolume() const;
                            static VolumeGroupsType::VolumeGroup read(xmlNode *root);
                        };


                        private:
                        const std::vector<VolumeGroupsType::VolumeGroup> volumeGroup_;
                        public:
                        explicit VolumeGroupsType(std::vector<VolumeGroup> volumeGroup);
                        const std::vector<VolumeGroupsType::VolumeGroup>& getVolumeGroup() const;
                        bool hasVolumeGroup() const;
                        const VolumeGroupsType::VolumeGroup* getFirstVolumeGroup() const;
                        static VolumeGroupsType read(xmlNode *root);
                    };

                    class VolumesType {
                        private:
                        const std::vector<VolumeRef> reference_;
                        public:
                        explicit VolumesType(std::vector<VolumeRef> reference);
                        const std::vector<VolumeRef>& getReference() const;
                        bool hasReference() const;
                        const VolumeRef* getFirstReference() const;
                        static VolumesType read(xmlNode *root);
                    };

                    class AttributesRef {
                        private:
                        const std::vector<AttributesRefType> reference_;
                        public:
                        explicit AttributesRef(std::vector<AttributesRefType> reference);
                        const std::vector<AttributesRefType>& getReference() const;
                        bool hasReference() const;
                        const AttributesRefType* getFirstReference() const;
                        static AttributesRef read(xmlNode *root);
                    };

                    class CriteriaType {
                        private:
                        const std::vector<CriterionType> criterion_;
                        public:
                        explicit CriteriaType(std::vector<CriterionType> criterion);
                        const std::vector<CriterionType>& getCriterion() const;
                        bool hasCriterion() const;
                        const CriterionType* getFirstCriterion() const;
                        static CriteriaType read(xmlNode *root);
                    };

                    class CriterionType {
                        private:
                        const std::string name_;
                        const std::string type_;
                        const std::optional<std::string> _default_;
                        public:
                        CriterionType(std::string name, std::string type, std::optional<std::string> _default);
                        const std::string& getName() const;
                        bool hasName() const;
                        const std::string& getType() const;
                        bool hasType() const;
                        const std::string& get_default() const;
                        bool has_default() const;
                        static CriterionType read(xmlNode *root);
                    };

                    class CriterionTypesType {
                        private:
                        const std::vector<CriterionTypeType> criterion_type_;
                        public:
                        explicit CriterionTypesType(std::vector<CriterionTypeType> criterion_type);
                        const std::vector<CriterionTypeType>& getCriterion_type() const;
                        bool hasCriterion_type() const;
                        const CriterionTypeType* getFirstCriterion_type() const;
                        static CriterionTypesType read(xmlNode *root);
                    };

                    class CriterionTypeType {
                        private:
                        const std::vector<ValuesType> values_;
                        const std::string name_;
                        const PfwCriterionTypeEnum type_;
                        public:
                        CriterionTypeType(std::vector<ValuesType> values, std::string name, PfwCriterionTypeEnum type);
                        const std::vector<ValuesType>& getValues() const;
                        bool hasValues() const;
                        const ValuesType* getFirstValues() const;
                        const std::string& getName() const;
                        bool hasName() const;
                        const PfwCriterionTypeEnum& getType() const;
                        bool hasType() const;
                        static CriterionTypeType read(xmlNode *root);
                    };

                    class ValuesType {
                        private:
                        const std::vector<ValueType> value_;
                        public:
                        explicit ValuesType(std::vector<ValueType> value);
                        const std::vector<ValueType>& getValue() const;
                        bool hasValue() const;
                        const ValueType* getFirstValue() const;
                        static ValuesType read(xmlNode *root);
                    };

                    class ValueType {
                        private:
                        const std::string literal_;
                        const int64_t numerical_;
                        const std::optional<std::string> android_type_;
                        public:
                        ValueType(std::string literal, int64_t numerical, std::optional<std::string> android_type);
                        const std::string& getLiteral() const;
                        bool hasLiteral() const;
                        const int64_t& getNumerical() const;
                        bool hasNumerical() const;
                        const std::string& getAndroid_type() const;
                        bool hasAndroid_type() const;
                        static ValueType read(xmlNode *root);
                    };

                    class AttributesRefType {
                        private:
                        const std::vector<AttributesType> attributes_;
                        const std::string name_;
                        public:
                        AttributesRefType(std::vector<AttributesType> attributes, std::string name);
                        const std::vector<AttributesType>& getAttributes() const;
                        bool hasAttributes() const;
                        const AttributesType* getFirstAttributes() const;
                        const std::string& getName() const;
                        bool hasName() const;
                        static AttributesRefType read(xmlNode *root);
                    };

                    class AttributesType {
                        private:
                        const std::vector<ContentTypeType> contentType_;
                        const std::vector<UsageType> usage_;
                        const std::vector<SourceType> source_;
                        const std::vector<FlagsType> flags_;
                        const std::vector<BundleType> bundle_;
                        const std::optional<std::string> attributesRef_;
                        public:
                        AttributesType(std::vector<ContentTypeType> contentType, std::vector<UsageType> usage, std::vector<SourceType> source, std::vector<FlagsType> flags, std::vector<BundleType> bundle, std::optional<std::string> attributesRef);
                        const std::vector<ContentTypeType>& getContentType() const;
                        bool hasContentType() const;
                        const ContentTypeType* getFirstContentType() const;
                        const std::vector<UsageType>& getUsage() const;
                        bool hasUsage() const;
                        const UsageType* getFirstUsage() const;
                        const std::vector<SourceType>& getSource() const;
                        bool hasSource() const;
                        const SourceType* getFirstSource() const;
                        const std::vector<FlagsType>& getFlags() const;
                        bool hasFlags() const;
                        const FlagsType* getFirstFlags() const;
                        const std::vector<BundleType>& getBundle() const;
                        bool hasBundle() const;
                        const BundleType* getFirstBundle() const;
                        const std::string& getAttributesRef() const;
                        bool hasAttributesRef() const;
                        static AttributesType read(xmlNode *root);
                    };

                    class ContentTypeType {
                        private:
                        const ContentType value_;
                        public:
                        explicit ContentTypeType(ContentType value);
                        const ContentType& getValue() const;
                        bool hasValue() const;
                        static ContentTypeType read(xmlNode *root);
                    };

                    class UsageType {
                        private:
                        const UsageEnumType value_;
                        public:
                        explicit UsageType(UsageEnumType value);
                        const UsageEnumType& getValue() const;
                        bool hasValue() const;
                        static UsageType read(xmlNode *root);
                    };

                    class SourceType {
                        private:
                        const SourceEnumType value_;
                        public:
                        explicit SourceType(SourceEnumType value);
                        const SourceEnumType& getValue() const;
                        bool hasValue() const;
                        static SourceType read(xmlNode *root);
                    };

                    class FlagsType {
                        private:
                        const std::vector<FlagType> value_;
                        public:
                        explicit FlagsType(std::vector<FlagType> value);
                        const std::vector<FlagType>& getValue() const;
                        bool hasValue() const;
                        static FlagsType read(xmlNode *root);
                    };

                    class BundleType {
                        private:
                        const std::string key_;
                        const std::string value_;
                        public:
                        BundleType(std::string key, std::string value);
                        const std::string& getKey() const;
                        bool hasKey() const;
                        const std::string& getValue() const;
                        bool hasValue() const;
                        static BundleType read(xmlNode *root);
                    };

                    class Volume {
                        private:
                        const std::vector<std::string> point_;
                        const std::optional<DeviceCategory> deviceCategory_;
                        const std::optional<std::string> ref_;
                        public:
                        Volume(std::vector<std::string> point, std::optional<DeviceCategory> deviceCategory, std::optional<std::string> ref);
                        const std::vector<std::string>& getPoint() const;
                        bool hasPoint() const;
                        const std::string* getFirstPoint() const;
                        const DeviceCategory& getDeviceCategory() const;
                        bool hasDeviceCategory() const;
                        const std::string& getRef() const;
                        bool hasRef() const;
                        static Volume read(xmlNode *root);
                    };

                    class VolumeRef {
                        private:
                        const std::vector<std::string> point_;
                        const std::string name_;
                        public:
                        VolumeRef(std::vector<std::string> point, std::string name);
                        const std::vector<std::string>& getPoint() const;
                        bool hasPoint() const;
                        const std::string* getFirstPoint() const;
                        const std::string& getName() const;
                        bool hasName() const;
                        static VolumeRef read(xmlNode *root);
                    };

                    class Configuration {
                        private:
                        const std::vector<ProductStrategies> productStrategies_;
                        const std::vector<CriterionTypesType> criterion_types_;
                        const std::vector<CriteriaType> criteria_;
                        const std::vector<VolumeGroupsType> volumeGroups_;
                        const std::vector<VolumesType> volumes_;
                        const std::vector<AttributesRef> attributesRef_;
                        const Version version_;
                        public:
                        Configuration(std::vector<ProductStrategies> productStrategies, std::vector<CriterionTypesType> criterion_types, std::vector<CriteriaType> criteria, std::vector<VolumeGroupsType> volumeGroups, std::vector<VolumesType> volumes, std::vector<AttributesRef> attributesRef, Version version);
                        const std::vector<ProductStrategies>& getProductStrategies() const;
                        bool hasProductStrategies() const;
                        const ProductStrategies* getFirstProductStrategies() const;
                        const std::vector<CriterionTypesType>& getCriterion_types() const;
                        bool hasCriterion_types() const;
                        const CriterionTypesType* getFirstCriterion_types() const;
                        const std::vector<CriteriaType>& getCriteria() const;
                        bool hasCriteria() const;
                        const CriteriaType* getFirstCriteria() const;
                        const std::vector<VolumeGroupsType>& getVolumeGroups() const;
                        bool hasVolumeGroups() const;
                        const VolumeGroupsType* getFirstVolumeGroups() const;
                        const std::vector<VolumesType>& getVolumes() const;
                        bool hasVolumes() const;
                        const VolumesType* getFirstVolumes() const;
                        const std::vector<AttributesRef>& getAttributesRef() const;
                        bool hasAttributesRef() const;
                        const AttributesRef* getFirstAttributesRef() const;
                        const Version& getVersion() const;
                        bool hasVersion() const;
                        static Configuration read(xmlNode *root);
                    };

                } // configuration
            } // engine
        } // policy
    } // audio
} // android
#endif // ANDROID_AUDIO_POLICY_ENGINE_CONFIGURATION_H
