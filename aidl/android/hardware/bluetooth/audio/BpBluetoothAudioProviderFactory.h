#pragma once

#include "aidl/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API BpBluetoothAudioProviderFactory : public ::ndk::BpCInterface<IBluetoothAudioProviderFactory> {
public:
  explicit BpBluetoothAudioProviderFactory(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothAudioProviderFactory();

  ::ndk::ScopedAStatus getProviderCapabilities(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) override;
  ::ndk::ScopedAStatus openProvider(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;

#ifdef _MSC_VER
  ::ndk::ScopedAStatus getProviderCapabilities_impl
        (
        ::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType,
        std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return
        );
  ::ndk::ScopedAStatus openProvider_impl
        (
        ::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType,
        std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return
        );
  ::ndk::ScopedAStatus getInterfaceVersion_impl( int32_t* _aidl_return );
  ::ndk::ScopedAStatus getInterfaceHash_impl( std::string* _aidl_return );
#endif

};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
