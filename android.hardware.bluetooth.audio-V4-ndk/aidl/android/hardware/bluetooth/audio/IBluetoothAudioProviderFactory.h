/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash ac25616dda1c45dc2915d3f5ac82687a1a6f6e46 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.aidl
 */
#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/hardware/bluetooth/audio/AudioCapabilities.h>
#include <aidl/android/hardware/bluetooth/audio/CodecInfo.h>
#include <aidl/android/hardware/bluetooth/audio/IBluetoothAudioProvider.h>
#include <aidl/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.h>
#include <aidl/android/hardware/bluetooth/audio/SessionType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS.h"

namespace aidl::android::hardware::bluetooth::audio {
class CodecInfo;
class IBluetoothAudioProvider;
}  // namespace aidl::android::hardware::bluetooth::audio
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class IBluetoothAudioProviderFactoryDelegator;

class ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API IBluetoothAudioProviderFactory : public ::ndk::ICInterface {
public:
  typedef IBluetoothAudioProviderFactoryDelegator DefaultDelegator;
  static inline constexpr const char* descriptor = "android.hardware.bluetooth.audio.IBluetoothAudioProviderFactory";
  IBluetoothAudioProviderFactory();
  virtual ~IBluetoothAudioProviderFactory();

  class ProviderInfo {
  public:
    typedef std::false_type fixed_size;
    static inline constexpr const char* descriptor = "android.hardware.bluetooth.audio.IBluetoothAudioProviderFactory.ProviderInfo";

    std::string name;
    std::vector<::aidl::android::hardware::bluetooth::audio::CodecInfo> codecInfos;
    bool supportsMultidirectionalCapabilities = false;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const ProviderInfo& _rhs) const {
      return std::tie(name, codecInfos, supportsMultidirectionalCapabilities) == std::tie(_rhs.name, _rhs.codecInfos, _rhs.supportsMultidirectionalCapabilities);
    }
    inline bool operator<(const ProviderInfo& _rhs) const {
      return std::tie(name, codecInfos, supportsMultidirectionalCapabilities) < std::tie(_rhs.name, _rhs.codecInfos, _rhs.supportsMultidirectionalCapabilities);
    }
    inline bool operator!=(const ProviderInfo& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const ProviderInfo& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const ProviderInfo& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const ProviderInfo& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "ProviderInfo{";
      _aidl_os << "name: " << ::android::internal::ToString(name);
      _aidl_os << ", codecInfos: " << ::android::internal::ToString(codecInfos);
      _aidl_os << ", supportsMultidirectionalCapabilities: " << ::android::internal::ToString(supportsMultidirectionalCapabilities);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  static inline const int32_t version = 4;
  static inline const std::string hash = "ac25616dda1c45dc2915d3f5ac82687a1a6f6e46";
  static constexpr uint32_t TRANSACTION_getProviderCapabilities = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_openProvider = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getProviderInfo = FIRST_CALL_TRANSACTION + 2;

#ifdef _MSC_VER
  std::function<::ndk::ScopedAStatus(SessionType, std::vector<AudioCapabilities>*)> m_getProviderCapabilitiesFun;
  std::function<::ndk::ScopedAStatus(SessionType, std::shared_ptr<IBluetoothAudioProvider>*)> m_openProviderFun;
  std::function<::ndk::ScopedAStatus(SessionType, std::optional<IBluetoothAudioProviderFactory::ProviderInfo>*)> m_getProviderInfoFun;
#endif

  static std::shared_ptr<IBluetoothAudioProviderFactory> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioProviderFactory>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioProviderFactory>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothAudioProviderFactory>& impl);
  static const std::shared_ptr<IBluetoothAudioProviderFactory>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus getProviderCapabilities(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus openProvider(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getProviderInfo(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::optional<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProviderFactory::ProviderInfo>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothAudioProviderFactory> default_impl;
};
class ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API IBluetoothAudioProviderFactoryDefault : public IBluetoothAudioProviderFactory {
public:
  ::ndk::ScopedAStatus getProviderCapabilities(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) override;
  ::ndk::ScopedAStatus openProvider(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) override;
  ::ndk::ScopedAStatus getProviderInfo(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::optional<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProviderFactory::ProviderInfo>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
