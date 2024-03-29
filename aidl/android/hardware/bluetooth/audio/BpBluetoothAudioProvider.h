#pragma once

#include "aidl/android/hardware/bluetooth/audio/IBluetoothAudioProvider.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API BpBluetoothAudioProvider : public ::ndk::BpCInterface<IBluetoothAudioProvider> {
public:
  explicit BpBluetoothAudioProvider(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothAudioProvider();

  ::ndk::ScopedAStatus endSession() override;
  ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) override;
  ::ndk::ScopedAStatus streamStarted(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus streamSuspended(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) override;
  ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;

#ifdef _MSC_VER
  ::ndk::ScopedAStatus endSession_impl();
  ::ndk::ScopedAStatus startSession_impl
        ( const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf,
          const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig,
          const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes,
          ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t,
          ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return
        );
  ::ndk::ScopedAStatus streamStarted_impl( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status );
  ::ndk::ScopedAStatus streamSuspended_impl( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status );
  ::ndk::ScopedAStatus updateAudioConfiguration_impl( const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig );
  ::ndk::ScopedAStatus setLowLatencyModeAllowed_impl( bool in_allowed );
  ::ndk::ScopedAStatus getInterfaceVersion_impl( int32_t* _aidl_return );
  ::ndk::ScopedAStatus getInterfaceHash_impl( std::string* _aidl_return );
#endif

};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
