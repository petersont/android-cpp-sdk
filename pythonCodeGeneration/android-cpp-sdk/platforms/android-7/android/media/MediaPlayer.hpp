/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.MediaPlayer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnErrorListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnBufferingUpdateListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnSeekCompleteListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnVideoSizeChangedListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnCompletionListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnInfoListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnPreparedListener; } } } }


#include <android/content/Context.hpp>
#include <android/media/MediaPlayer.hpp>
#include <android/net/Uri.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class MediaPlayer;
	namespace MediaPlayer_ {

		class OnErrorListener;
		class OnErrorListener
			: public object<OnErrorListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnErrorListener(jobject jobj)
			: object<OnErrorListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onError(local_ref< android::media::MediaPlayer >  const&, jint, jint);
		}; //class OnErrorListener

		class OnBufferingUpdateListener;
		class OnBufferingUpdateListener
			: public object<OnBufferingUpdateListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnBufferingUpdateListener(jobject jobj)
			: object<OnBufferingUpdateListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onBufferingUpdate(local_ref< android::media::MediaPlayer >  const&, jint);
		}; //class OnBufferingUpdateListener

		class OnSeekCompleteListener;
		class OnSeekCompleteListener
			: public object<OnSeekCompleteListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnSeekCompleteListener(jobject jobj)
			: object<OnSeekCompleteListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onSeekComplete(local_ref< android::media::MediaPlayer >  const&);
		}; //class OnSeekCompleteListener

		class OnVideoSizeChangedListener;
		class OnVideoSizeChangedListener
			: public object<OnVideoSizeChangedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnVideoSizeChangedListener(jobject jobj)
			: object<OnVideoSizeChangedListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onVideoSizeChanged(local_ref< android::media::MediaPlayer >  const&, jint, jint);
		}; //class OnVideoSizeChangedListener

		class OnCompletionListener;
		class OnCompletionListener
			: public object<OnCompletionListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnCompletionListener(jobject jobj)
			: object<OnCompletionListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onCompletion(local_ref< android::media::MediaPlayer >  const&);
		}; //class OnCompletionListener

		class OnInfoListener;
		class OnInfoListener
			: public object<OnInfoListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnInfoListener(jobject jobj)
			: object<OnInfoListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onInfo(local_ref< android::media::MediaPlayer >  const&, jint, jint);
		}; //class OnInfoListener

		class OnPreparedListener;
		class OnPreparedListener
			: public object<OnPreparedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnPreparedListener(jobject jobj)
			: object<OnPreparedListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onPrepared(local_ref< android::media::MediaPlayer >  const&);
		}; //class OnPreparedListener

	} //namespace MediaPlayer_

	class MediaPlayer
		: public object<MediaPlayer>
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
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		typedef MediaPlayer_::OnErrorListener OnErrorListener;
		typedef MediaPlayer_::OnBufferingUpdateListener OnBufferingUpdateListener;
		typedef MediaPlayer_::OnSeekCompleteListener OnSeekCompleteListener;
		typedef MediaPlayer_::OnVideoSizeChangedListener OnVideoSizeChangedListener;
		typedef MediaPlayer_::OnCompletionListener OnCompletionListener;
		typedef MediaPlayer_::OnInfoListener OnInfoListener;
		typedef MediaPlayer_::OnPreparedListener OnPreparedListener;

		explicit MediaPlayer(jobject jobj)
		: object<MediaPlayer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		MediaPlayer();
		void setDisplay(local_ref< android::view::SurfaceHolder >  const&);
		static local_ref< android::media::MediaPlayer > create(local_ref< android::content::Context >  const&, local_ref< android::net::Uri >  const&);
		static local_ref< android::media::MediaPlayer > create(local_ref< android::content::Context >  const&, local_ref< android::net::Uri >  const&, local_ref< android::view::SurfaceHolder >  const&);
		static local_ref< android::media::MediaPlayer > create(local_ref< android::content::Context >  const&, jint);
		void setDataSource(local_ref< android::content::Context >  const&, local_ref< android::net::Uri >  const&);
		void setDataSource(local_ref< java::lang::String >  const&);
		void setDataSource(local_ref< java::io::FileDescriptor >  const&);
		void setDataSource(local_ref< java::io::FileDescriptor >  const&, jlong, jlong);
		void prepare();
		void prepareAsync();
		void start();
		void stop();
		void pause();
		void setWakeMode(local_ref< android::content::Context >  const&, jint);
		void setScreenOnWhilePlaying(jboolean);
		jint getVideoWidth();
		jint getVideoHeight();
		jboolean isPlaying();
		void seekTo(jint);
		jint getCurrentPosition();
		jint getDuration();
		void release();
		void reset();
		void setAudioStreamType(jint);
		void setLooping(jboolean);
		jboolean isLooping();
		void setVolume(jfloat, jfloat);
		void setOnPreparedListener(local_ref< android::media::MediaPlayer_::OnPreparedListener >  const&);
		void setOnCompletionListener(local_ref< android::media::MediaPlayer_::OnCompletionListener >  const&);
		void setOnBufferingUpdateListener(local_ref< android::media::MediaPlayer_::OnBufferingUpdateListener >  const&);
		void setOnSeekCompleteListener(local_ref< android::media::MediaPlayer_::OnSeekCompleteListener >  const&);
		void setOnVideoSizeChangedListener(local_ref< android::media::MediaPlayer_::OnVideoSizeChangedListener >  const&);
		void setOnErrorListener(local_ref< android::media::MediaPlayer_::OnErrorListener >  const&);
		void setOnInfoListener(local_ref< android::media::MediaPlayer_::OnInfoListener >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > MEDIA_ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MEDIA_ERROR_SERVER_DIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MEDIA_INFO_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > MEDIA_INFO_VIDEO_TRACK_LAGGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > MEDIA_INFO_BAD_INTERLEAVING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > MEDIA_INFO_NOT_SEEKABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > MEDIA_INFO_METADATA_UPDATE;
	}; //class MediaPlayer

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_IMPL

namespace j2cpp {




android::media::MediaPlayer_::OnErrorListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::media::MediaPlayer_::OnErrorListener::onError(local_ref< android::media::MediaPlayer > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::MediaPlayer_::OnErrorListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnErrorListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnErrorListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnErrorListener,"android/media/MediaPlayer$OnErrorListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnErrorListener,0,"onError","(Landroid/media/MediaPlayer;II)Z")


android::media::MediaPlayer_::OnBufferingUpdateListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaPlayer_::OnBufferingUpdateListener::onBufferingUpdate(local_ref< android::media::MediaPlayer > const &a0, jint a1)
{
	return call_method<
		android::media::MediaPlayer_::OnBufferingUpdateListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnBufferingUpdateListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnBufferingUpdateListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnBufferingUpdateListener,"android/media/MediaPlayer$OnBufferingUpdateListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnBufferingUpdateListener,0,"onBufferingUpdate","(Landroid/media/MediaPlayer;I)V")


android::media::MediaPlayer_::OnSeekCompleteListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaPlayer_::OnSeekCompleteListener::onSeekComplete(local_ref< android::media::MediaPlayer > const &a0)
{
	return call_method<
		android::media::MediaPlayer_::OnSeekCompleteListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnSeekCompleteListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnSeekCompleteListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnSeekCompleteListener,"android/media/MediaPlayer$OnSeekCompleteListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnSeekCompleteListener,0,"onSeekComplete","(Landroid/media/MediaPlayer;)V")


android::media::MediaPlayer_::OnVideoSizeChangedListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaPlayer_::OnVideoSizeChangedListener::onVideoSizeChanged(local_ref< android::media::MediaPlayer > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::MediaPlayer_::OnVideoSizeChangedListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnVideoSizeChangedListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnVideoSizeChangedListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnVideoSizeChangedListener,"android/media/MediaPlayer$OnVideoSizeChangedListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnVideoSizeChangedListener,0,"onVideoSizeChanged","(Landroid/media/MediaPlayer;II)V")


android::media::MediaPlayer_::OnCompletionListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaPlayer_::OnCompletionListener::onCompletion(local_ref< android::media::MediaPlayer > const &a0)
{
	return call_method<
		android::media::MediaPlayer_::OnCompletionListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnCompletionListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnCompletionListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnCompletionListener,"android/media/MediaPlayer$OnCompletionListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnCompletionListener,0,"onCompletion","(Landroid/media/MediaPlayer;)V")


android::media::MediaPlayer_::OnInfoListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::media::MediaPlayer_::OnInfoListener::onInfo(local_ref< android::media::MediaPlayer > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::MediaPlayer_::OnInfoListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnInfoListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnInfoListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnInfoListener,"android/media/MediaPlayer$OnInfoListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnInfoListener,0,"onInfo","(Landroid/media/MediaPlayer;II)Z")


android::media::MediaPlayer_::OnPreparedListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::MediaPlayer_::OnPreparedListener::onPrepared(local_ref< android::media::MediaPlayer > const &a0)
{
	return call_method<
		android::media::MediaPlayer_::OnPreparedListener::J2CPP_CLASS_NAME,
		android::media::MediaPlayer_::OnPreparedListener::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer_::OnPreparedListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnPreparedListener,"android/media/MediaPlayer$OnPreparedListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnPreparedListener,0,"onPrepared","(Landroid/media/MediaPlayer;)V")



android::media::MediaPlayer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::MediaPlayer::MediaPlayer()
: object<android::media::MediaPlayer>(
	call_new_object<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(0),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::media::MediaPlayer::setDisplay(local_ref< android::view::SurfaceHolder > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(1),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

local_ref< android::media::MediaPlayer > android::media::MediaPlayer::create(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_static_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(2),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::media::MediaPlayer >
	>(a0, a1);
}

local_ref< android::media::MediaPlayer > android::media::MediaPlayer::create(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1, local_ref< android::view::SurfaceHolder > const &a2)
{
	return call_static_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(3),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::media::MediaPlayer >
	>(a0, a1, a2);
}

local_ref< android::media::MediaPlayer > android::media::MediaPlayer::create(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_static_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(4),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::media::MediaPlayer >
	>(a0, a1);
}

void android::media::MediaPlayer::setDataSource(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(5),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::MediaPlayer::setDataSource(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(6),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setDataSource(local_ref< java::io::FileDescriptor > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(7),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setDataSource(local_ref< java::io::FileDescriptor > const &a0, jlong a1, jlong a2)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(8),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::media::MediaPlayer::prepare()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(9),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::prepareAsync()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(10),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::start()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(11),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::stop()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(12),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::pause()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(13),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::setWakeMode(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(14),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::MediaPlayer::setScreenOnWhilePlaying(jboolean a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(15),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

jint android::media::MediaPlayer::getVideoWidth()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(16),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}

jint android::media::MediaPlayer::getVideoHeight()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(17),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

jboolean android::media::MediaPlayer::isPlaying()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(18),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject());
}

void android::media::MediaPlayer::seekTo(jint a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(19),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

jint android::media::MediaPlayer::getCurrentPosition()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(20),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}

jint android::media::MediaPlayer::getDuration()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(21),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}

void android::media::MediaPlayer::release()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(22),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::reset()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(23),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject());
}

void android::media::MediaPlayer::setAudioStreamType(jint a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(24),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setLooping(jboolean a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(25),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

jboolean android::media::MediaPlayer::isLooping()
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(26),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject());
}

void android::media::MediaPlayer::setVolume(jfloat a0, jfloat a1)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(27),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1);
}


void android::media::MediaPlayer::setOnPreparedListener(local_ref< android::media::MediaPlayer_::OnPreparedListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(29),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setOnCompletionListener(local_ref< android::media::MediaPlayer_::OnCompletionListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(30),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setOnBufferingUpdateListener(local_ref< android::media::MediaPlayer_::OnBufferingUpdateListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(31),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setOnSeekCompleteListener(local_ref< android::media::MediaPlayer_::OnSeekCompleteListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(32),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setOnVideoSizeChangedListener(local_ref< android::media::MediaPlayer_::OnVideoSizeChangedListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(33),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(33), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setOnErrorListener(local_ref< android::media::MediaPlayer_::OnErrorListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(34),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0);
}

void android::media::MediaPlayer::setOnInfoListener(local_ref< android::media::MediaPlayer_::OnInfoListener > const &a0)
{
	return call_method<
		android::media::MediaPlayer::J2CPP_CLASS_NAME,
		android::media::MediaPlayer::J2CPP_METHOD_NAME(35),
		android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(0),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::media::MediaPlayer::MEDIA_ERROR_UNKNOWN;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(1),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::media::MediaPlayer::MEDIA_ERROR_SERVER_DIED;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(2),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::media::MediaPlayer::MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(3),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::media::MediaPlayer::MEDIA_INFO_UNKNOWN;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(4),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::media::MediaPlayer::MEDIA_INFO_VIDEO_TRACK_LAGGING;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(5),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::media::MediaPlayer::MEDIA_INFO_BAD_INTERLEAVING;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(6),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::media::MediaPlayer::MEDIA_INFO_NOT_SEEKABLE;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(7),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::media::MediaPlayer::MEDIA_INFO_METADATA_UPDATE;


J2CPP_DEFINE_CLASS(android::media::MediaPlayer,"android/media/MediaPlayer")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,1,"setDisplay","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,2,"create","(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,3,"create","(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;)Landroid/media/MediaPlayer;")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,4,"create","(Landroid/content/Context;I)Landroid/media/MediaPlayer;")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,5,"setDataSource","(Landroid/content/Context;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,6,"setDataSource","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,7,"setDataSource","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,8,"setDataSource","(Ljava/io/FileDescriptor;JJ)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,9,"prepare","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,10,"prepareAsync","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,11,"start","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,12,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,13,"pause","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,14,"setWakeMode","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,15,"setScreenOnWhilePlaying","(Z)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,16,"getVideoWidth","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,17,"getVideoHeight","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,18,"isPlaying","()Z")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,19,"seekTo","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,20,"getCurrentPosition","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,21,"getDuration","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,22,"release","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,23,"reset","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,24,"setAudioStreamType","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,25,"setLooping","(Z)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,26,"isLooping","()Z")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,27,"setVolume","(FF)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,28,"finalize","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,29,"setOnPreparedListener","(Landroid/media/MediaPlayer$OnPreparedListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,30,"setOnCompletionListener","(Landroid/media/MediaPlayer$OnCompletionListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,31,"setOnBufferingUpdateListener","(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,32,"setOnSeekCompleteListener","(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,33,"setOnVideoSizeChangedListener","(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,34,"setOnErrorListener","(Landroid/media/MediaPlayer$OnErrorListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,35,"setOnInfoListener","(Landroid/media/MediaPlayer$OnInfoListener;)V")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,0,"MEDIA_ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,1,"MEDIA_ERROR_SERVER_DIED","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,2,"MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,3,"MEDIA_INFO_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,4,"MEDIA_INFO_VIDEO_TRACK_LAGGING","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,5,"MEDIA_INFO_BAD_INTERLEAVING","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,6,"MEDIA_INFO_NOT_SEEKABLE","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,7,"MEDIA_INFO_METADATA_UPDATE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
