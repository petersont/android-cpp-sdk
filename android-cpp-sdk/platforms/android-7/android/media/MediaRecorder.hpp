/*================================================================================
  code generated by: java2cpp
  class: android.media.MediaRecorder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace hardware { class Camera; } } }
namespace j2cpp { namespace android { namespace view { class Surface; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaRecorder_ { class OnInfoListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaRecorder_ { class OnErrorListener; } } } }


#include <android/hardware/Camera.hpp>
#include <android/media/MediaRecorder.hpp>
#include <android/view/Surface.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class MediaRecorder;
	namespace MediaRecorder_ {

		class OnInfoListener;
		class OnInfoListener
			: public cpp_object<OnInfoListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnInfoListener(jobject jobj)
			: cpp_object<OnInfoListener>(jobj)
			{
			}

			void onInfo(local_ref< android::media::MediaRecorder > const&, cpp_int const&, cpp_int const&);
		}; //class OnInfoListener

		class OutputFormat;
		class OutputFormat
			: public cpp_object<OutputFormat>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			OutputFormat(jobject jobj)
			: cpp_object<OutputFormat>(jobj)
			{
			}


			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > THREE_GPP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > MPEG_4;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > RAW_AMR;
		}; //class OutputFormat

		class OnErrorListener;
		class OnErrorListener
			: public cpp_object<OnErrorListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnErrorListener(jobject jobj)
			: cpp_object<OnErrorListener>(jobj)
			{
			}

			void onError(local_ref< android::media::MediaRecorder > const&, cpp_int const&, cpp_int const&);
		}; //class OnErrorListener

		class VideoEncoder;
		class VideoEncoder
			: public cpp_object<VideoEncoder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			VideoEncoder(jobject jobj)
			: cpp_object<VideoEncoder>(jobj)
			{
			}


			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > H263;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > H264;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > MPEG_4_SP;
		}; //class VideoEncoder

		class AudioSource;
		class AudioSource
			: public cpp_object<AudioSource>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)

			AudioSource(jobject jobj)
			: cpp_object<AudioSource>(jobj)
			{
			}


			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > MIC;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > VOICE_UPLINK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > VOICE_DOWNLINK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > VOICE_CALL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > CAMCORDER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > VOICE_RECOGNITION;
		}; //class AudioSource

		class VideoSource;
		class VideoSource
			: public cpp_object<VideoSource>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			VideoSource(jobject jobj)
			: cpp_object<VideoSource>(jobj)
			{
			}


			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > CAMERA;
		}; //class VideoSource

		class AudioEncoder;
		class AudioEncoder
			: public cpp_object<AudioEncoder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			AudioEncoder(jobject jobj)
			: cpp_object<AudioEncoder>(jobj)
			{
			}


			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > AMR_NB;
		}; //class AudioEncoder

	} //namespace MediaRecorder_

	class MediaRecorder
		: public cpp_object<MediaRecorder>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef MediaRecorder_::OnInfoListener OnInfoListener;
		typedef MediaRecorder_::OutputFormat OutputFormat;
		typedef MediaRecorder_::OnErrorListener OnErrorListener;
		typedef MediaRecorder_::VideoEncoder VideoEncoder;
		typedef MediaRecorder_::AudioSource AudioSource;
		typedef MediaRecorder_::VideoSource VideoSource;
		typedef MediaRecorder_::AudioEncoder AudioEncoder;

		MediaRecorder(jobject jobj)
		: cpp_object<MediaRecorder>(jobj)
		{
		}

		void setCamera(local_ref< android::hardware::Camera > const&);
		void setPreviewDisplay(local_ref< android::view::Surface > const&);
		void setAudioSource(cpp_int const&);
		static cpp_int getAudioSourceMax();
		void setVideoSource(cpp_int const&);
		void setOutputFormat(cpp_int const&);
		void setVideoSize(cpp_int const&, cpp_int const&);
		void setVideoFrameRate(cpp_int const&);
		void setMaxDuration(cpp_int const&);
		void setMaxFileSize(cpp_long const&);
		void setAudioEncoder(cpp_int const&);
		void setVideoEncoder(cpp_int const&);
		void setOutputFile(local_ref< java::io::FileDescriptor > const&);
		void setOutputFile(local_ref< java::lang::String > const&);
		void prepare();
		void start();
		void stop();
		void reset();
		cpp_int getMaxAmplitude();
		void setOnErrorListener(local_ref< android::media::MediaRecorder_::OnErrorListener > const&);
		void setOnInfoListener(local_ref< android::media::MediaRecorder_::OnInfoListener > const&);
		void release();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > MEDIA_RECORDER_ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > MEDIA_RECORDER_INFO_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > MEDIA_RECORDER_INFO_MAX_DURATION_REACHED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED;
	}; //class MediaRecorder

} //namespace media
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_IMPL

namespace j2cpp {



void android::media::MediaRecorder_::OnInfoListener::onInfo(local_ref< android::media::MediaRecorder > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::OnInfoListener,"android/media/MediaRecorder$OnInfoListener")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::OnInfoListener,0,"onInfo","(Landroid/media/MediaRecorder;II)V")

template <>
local_ref< android::media::MediaRecorder_::OutputFormat > create< android::media::MediaRecorder_::OutputFormat>(local_ref< android::media::MediaRecorder > const &a0)
{
	return local_ref< android::media::MediaRecorder_::OutputFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME, android::media::MediaRecorder_::OutputFormat::J2CPP_METHOD_NAME(0), android::media::MediaRecorder_::OutputFormat::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaRecorder_::OutputFormat::DEFAULT;

static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaRecorder_::OutputFormat::THREE_GPP;

static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::MediaRecorder_::OutputFormat::MPEG_4;

static_field<
	android::media::MediaRecorder_::OutputFormat::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder_::OutputFormat::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::MediaRecorder_::OutputFormat::RAW_AMR;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::OutputFormat,"android/media/MediaRecorder$OutputFormat")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::OutputFormat,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,1,"THREE_GPP","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,2,"MPEG_4","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,3,"RAW_AMR","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::OutputFormat,4,"this$0","Landroid/media/MediaRecorder;")

void android::media::MediaRecorder_::OnErrorListener::onError(local_ref< android::media::MediaRecorder > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::OnErrorListener,"android/media/MediaRecorder$OnErrorListener")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::OnErrorListener,0,"onError","(Landroid/media/MediaRecorder;II)V")

template <>
local_ref< android::media::MediaRecorder_::VideoEncoder > create< android::media::MediaRecorder_::VideoEncoder>(local_ref< android::media::MediaRecorder > const &a0)
{
	return local_ref< android::media::MediaRecorder_::VideoEncoder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME, android::media::MediaRecorder_::VideoEncoder::J2CPP_METHOD_NAME(0), android::media::MediaRecorder_::VideoEncoder::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaRecorder_::VideoEncoder::DEFAULT;

static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaRecorder_::VideoEncoder::H263;

static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::MediaRecorder_::VideoEncoder::H264;

static_field<
	android::media::MediaRecorder_::VideoEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder_::VideoEncoder::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::MediaRecorder_::VideoEncoder::MPEG_4_SP;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::VideoEncoder,"android/media/MediaRecorder$VideoEncoder")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::VideoEncoder,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,1,"H263","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,2,"H264","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,3,"MPEG_4_SP","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoEncoder,4,"this$0","Landroid/media/MediaRecorder;")

template <>
local_ref< android::media::MediaRecorder_::AudioSource > create< android::media::MediaRecorder_::AudioSource>(local_ref< android::media::MediaRecorder > const &a0)
{
	return local_ref< android::media::MediaRecorder_::AudioSource >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME, android::media::MediaRecorder_::AudioSource::J2CPP_METHOD_NAME(0), android::media::MediaRecorder_::AudioSource::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaRecorder_::AudioSource::DEFAULT;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaRecorder_::AudioSource::MIC;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::MediaRecorder_::AudioSource::VOICE_UPLINK;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::MediaRecorder_::AudioSource::VOICE_DOWNLINK;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(4),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::media::MediaRecorder_::AudioSource::VOICE_CALL;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(5),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::media::MediaRecorder_::AudioSource::CAMCORDER;

static_field<
	android::media::MediaRecorder_::AudioSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_NAME(6),
	android::media::MediaRecorder_::AudioSource::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::media::MediaRecorder_::AudioSource::VOICE_RECOGNITION;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::AudioSource,"android/media/MediaRecorder$AudioSource")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::AudioSource,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,1,"MIC","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,2,"VOICE_UPLINK","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,3,"VOICE_DOWNLINK","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,4,"VOICE_CALL","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,5,"CAMCORDER","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,6,"VOICE_RECOGNITION","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioSource,7,"this$0","Landroid/media/MediaRecorder;")

template <>
local_ref< android::media::MediaRecorder_::VideoSource > create< android::media::MediaRecorder_::VideoSource>(local_ref< android::media::MediaRecorder > const &a0)
{
	return local_ref< android::media::MediaRecorder_::VideoSource >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaRecorder_::VideoSource::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaRecorder_::VideoSource::J2CPP_CLASS_NAME, android::media::MediaRecorder_::VideoSource::J2CPP_METHOD_NAME(0), android::media::MediaRecorder_::VideoSource::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::MediaRecorder_::VideoSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaRecorder_::VideoSource::DEFAULT;

static_field<
	android::media::MediaRecorder_::VideoSource::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::VideoSource::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaRecorder_::VideoSource::CAMERA;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::VideoSource,"android/media/MediaRecorder$VideoSource")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::VideoSource,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoSource,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoSource,1,"CAMERA","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::VideoSource,2,"this$0","Landroid/media/MediaRecorder;")

template <>
local_ref< android::media::MediaRecorder_::AudioEncoder > create< android::media::MediaRecorder_::AudioEncoder>(local_ref< android::media::MediaRecorder > const &a0)
{
	return local_ref< android::media::MediaRecorder_::AudioEncoder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaRecorder_::AudioEncoder::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaRecorder_::AudioEncoder::J2CPP_CLASS_NAME, android::media::MediaRecorder_::AudioEncoder::J2CPP_METHOD_NAME(0), android::media::MediaRecorder_::AudioEncoder::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::MediaRecorder_::AudioEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaRecorder_::AudioEncoder::DEFAULT;

static_field<
	android::media::MediaRecorder_::AudioEncoder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder_::AudioEncoder::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaRecorder_::AudioEncoder::AMR_NB;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder_::AudioEncoder,"android/media/MediaRecorder$AudioEncoder")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder_::AudioEncoder,0,"<init>","(Landroid/media/MediaRecorder;)V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioEncoder,0,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioEncoder,1,"AMR_NB","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder_::AudioEncoder,2,"this$0","Landroid/media/MediaRecorder;")


template <>
local_ref< android::media::MediaRecorder > create< android::media::MediaRecorder>()
{
	return local_ref< android::media::MediaRecorder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaRecorder::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaRecorder::J2CPP_CLASS_NAME, android::media::MediaRecorder::J2CPP_METHOD_NAME(0), android::media::MediaRecorder::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::media::MediaRecorder::setCamera(local_ref< android::hardware::Camera > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setPreviewDisplay(local_ref< android::view::Surface > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setAudioSource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::MediaRecorder::getAudioSourceMax()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

void android::media::MediaRecorder::setVideoSource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setOutputFormat(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setVideoSize(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setVideoFrameRate(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setMaxDuration(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setMaxFileSize(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setAudioEncoder(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setVideoEncoder(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setOutputFile(local_ref< java::io::FileDescriptor > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setOutputFile(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::prepare()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::media::MediaRecorder::start()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::media::MediaRecorder::stop()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

void android::media::MediaRecorder::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int android::media::MediaRecorder::getMaxAmplitude()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void android::media::MediaRecorder::setOnErrorListener(local_ref< android::media::MediaRecorder_::OnErrorListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::setOnInfoListener(local_ref< android::media::MediaRecorder_::OnInfoListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaRecorder::release()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}



static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(0),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaRecorder::MEDIA_RECORDER_ERROR_UNKNOWN;

static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(1),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaRecorder::MEDIA_RECORDER_INFO_UNKNOWN;

static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(2),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::MediaRecorder::MEDIA_RECORDER_INFO_MAX_DURATION_REACHED;

static_field<
	android::media::MediaRecorder::J2CPP_CLASS_NAME,
	android::media::MediaRecorder::J2CPP_FIELD_NAME(3),
	android::media::MediaRecorder::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::MediaRecorder::MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED;


J2CPP_DEFINE_CLASS(android::media::MediaRecorder,"android/media/MediaRecorder")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,1,"setCamera","(Landroid/hardware/Camera;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,2,"setPreviewDisplay","(Landroid/view/Surface;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,3,"setAudioSource","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,4,"getAudioSourceMax","()I")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,5,"setVideoSource","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,6,"setOutputFormat","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,7,"setVideoSize","(II)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,8,"setVideoFrameRate","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,9,"setMaxDuration","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,10,"setMaxFileSize","(J)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,11,"setAudioEncoder","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,12,"setVideoEncoder","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,13,"setOutputFile","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,14,"setOutputFile","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,15,"prepare","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,16,"start","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,17,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,18,"reset","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,19,"getMaxAmplitude","()I")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,20,"setOnErrorListener","(Landroid/media/MediaRecorder$OnErrorListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,21,"setOnInfoListener","(Landroid/media/MediaRecorder$OnInfoListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,22,"release","()V")
J2CPP_DEFINE_METHOD(android::media::MediaRecorder,23,"finalize","()V")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,0,"MEDIA_RECORDER_ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,1,"MEDIA_RECORDER_INFO_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,2,"MEDIA_RECORDER_INFO_MAX_DURATION_REACHED","I")
J2CPP_DEFINE_FIELD(android::media::MediaRecorder,3,"MEDIA_RECORDER_INFO_MAX_FILESIZE_REACHED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIARECORDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION