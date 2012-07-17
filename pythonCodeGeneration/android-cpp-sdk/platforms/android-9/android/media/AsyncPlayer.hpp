/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.AsyncPlayer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_ASYNCPLAYER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_ASYNCPLAYER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }


#include <android/content/Context.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class AsyncPlayer;
	class AsyncPlayer
		: public object<AsyncPlayer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AsyncPlayer(jobject jobj)
		: object<AsyncPlayer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AsyncPlayer(local_ref< java::lang::String > const&);
		void play(local_ref< android::content::Context >  const&, local_ref< android::net::Uri >  const&, jboolean, jint);
		void stop();
	}; //class AsyncPlayer

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_ASYNCPLAYER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_ASYNCPLAYER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_ASYNCPLAYER_HPP_IMPL

namespace j2cpp {



android::media::AsyncPlayer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::media::AsyncPlayer::AsyncPlayer(local_ref< java::lang::String > const &a0)
: object<android::media::AsyncPlayer>(
	call_new_object<
		android::media::AsyncPlayer::J2CPP_CLASS_NAME,
		android::media::AsyncPlayer::J2CPP_METHOD_NAME(0),
		android::media::AsyncPlayer::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void android::media::AsyncPlayer::play(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1, jboolean a2, jint a3)
{
	return call_method<
		android::media::AsyncPlayer::J2CPP_CLASS_NAME,
		android::media::AsyncPlayer::J2CPP_METHOD_NAME(1),
		android::media::AsyncPlayer::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::media::AsyncPlayer::stop()
{
	return call_method<
		android::media::AsyncPlayer::J2CPP_CLASS_NAME,
		android::media::AsyncPlayer::J2CPP_METHOD_NAME(2),
		android::media::AsyncPlayer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::media::AsyncPlayer,"android/media/AsyncPlayer")
J2CPP_DEFINE_METHOD(android::media::AsyncPlayer,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::AsyncPlayer,1,"play","(Landroid/content/Context;Landroid/net/Uri;ZI)V")
J2CPP_DEFINE_METHOD(android::media::AsyncPlayer,2,"stop","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_ASYNCPLAYER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
