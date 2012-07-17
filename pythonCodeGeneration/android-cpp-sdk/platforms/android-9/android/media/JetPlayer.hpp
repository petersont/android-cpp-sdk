/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.JetPlayer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_JETPLAYER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_JETPLAYER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace media { namespace JetPlayer_ { class OnJetEventListener; } } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }


#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/media/JetPlayer.hpp>
#include <android/os/Handler.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class JetPlayer;
	namespace JetPlayer_ {

		class OnJetEventListener;
		class OnJetEventListener
			: public object<OnJetEventListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit OnJetEventListener(jobject jobj)
			: object<OnJetEventListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onJetEvent(local_ref< android::media::JetPlayer >  const&, jshort, jbyte, jbyte, jbyte, jbyte);
			void onJetUserIdUpdate(local_ref< android::media::JetPlayer >  const&, jint, jint);
			void onJetNumQueuedSegmentUpdate(local_ref< android::media::JetPlayer >  const&, jint);
			void onJetPauseUpdate(local_ref< android::media::JetPlayer >  const&, jint);
		}; //class OnJetEventListener

	} //namespace JetPlayer_

	class JetPlayer
		: public object<JetPlayer>
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

		typedef JetPlayer_::OnJetEventListener OnJetEventListener;

		explicit JetPlayer(jobject jobj)
		: object<JetPlayer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::media::JetPlayer > getJetPlayer();
		local_ref< java::lang::Object > clone();
		void release();
		static jint getMaxTracks();
		jboolean loadJetFile(local_ref< java::lang::String >  const&);
		jboolean loadJetFile(local_ref< android::content::res::AssetFileDescriptor >  const&);
		jboolean closeJetFile();
		jboolean play();
		jboolean pause();
		jboolean queueJetSegment(jint, jint, jint, jint, jint, jbyte);
		jboolean queueJetSegmentMuteArray(jint, jint, jint, jint, local_ref< array<jboolean,1> >  const&, jbyte);
		jboolean setMuteFlags(jint, jboolean);
		jboolean setMuteArray(local_ref< array<jboolean,1> >  const&, jboolean);
		jboolean setMuteFlag(jint, jboolean, jboolean);
		jboolean triggerClip(jint);
		jboolean clearQueue();
		void setEventListener(local_ref< android::media::JetPlayer_::OnJetEventListener >  const&);
		void setEventListener(local_ref< android::media::JetPlayer_::OnJetEventListener >  const&, local_ref< android::os::Handler >  const&);
	}; //class JetPlayer

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_JETPLAYER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_JETPLAYER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_JETPLAYER_HPP_IMPL

namespace j2cpp {




android::media::JetPlayer_::OnJetEventListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::media::JetPlayer_::OnJetEventListener::onJetEvent(local_ref< android::media::JetPlayer > const &a0, jshort a1, jbyte a2, jbyte a3, jbyte a4, jbyte a5)
{
	return call_method<
		android::media::JetPlayer_::OnJetEventListener::J2CPP_CLASS_NAME,
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_NAME(0),
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::media::JetPlayer_::OnJetEventListener::onJetUserIdUpdate(local_ref< android::media::JetPlayer > const &a0, jint a1, jint a2)
{
	return call_method<
		android::media::JetPlayer_::OnJetEventListener::J2CPP_CLASS_NAME,
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_NAME(1),
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::media::JetPlayer_::OnJetEventListener::onJetNumQueuedSegmentUpdate(local_ref< android::media::JetPlayer > const &a0, jint a1)
{
	return call_method<
		android::media::JetPlayer_::OnJetEventListener::J2CPP_CLASS_NAME,
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_NAME(2),
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void android::media::JetPlayer_::OnJetEventListener::onJetPauseUpdate(local_ref< android::media::JetPlayer > const &a0, jint a1)
{
	return call_method<
		android::media::JetPlayer_::OnJetEventListener::J2CPP_CLASS_NAME,
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_NAME(3),
		android::media::JetPlayer_::OnJetEventListener::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::media::JetPlayer_::OnJetEventListener,"android/media/JetPlayer$OnJetEventListener")
J2CPP_DEFINE_METHOD(android::media::JetPlayer_::OnJetEventListener,0,"onJetEvent","(Landroid/media/JetPlayer;SBBBB)V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer_::OnJetEventListener,1,"onJetUserIdUpdate","(Landroid/media/JetPlayer;II)V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer_::OnJetEventListener,2,"onJetNumQueuedSegmentUpdate","(Landroid/media/JetPlayer;I)V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer_::OnJetEventListener,3,"onJetPauseUpdate","(Landroid/media/JetPlayer;I)V")



android::media::JetPlayer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::media::JetPlayer > android::media::JetPlayer::getJetPlayer()
{
	return call_static_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(1),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::media::JetPlayer >
	>();
}

local_ref< java::lang::Object > android::media::JetPlayer::clone()
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(2),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject());
}


void android::media::JetPlayer::release()
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(4),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

jint android::media::JetPlayer::getMaxTracks()
{
	return call_static_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(5),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>();
}

jboolean android::media::JetPlayer::loadJetFile(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(6),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::media::JetPlayer::loadJetFile(local_ref< android::content::res::AssetFileDescriptor > const &a0)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(7),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::media::JetPlayer::closeJetFile()
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(8),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jboolean android::media::JetPlayer::play()
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(9),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

jboolean android::media::JetPlayer::pause()
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(10),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

jboolean android::media::JetPlayer::queueJetSegment(jint a0, jint a1, jint a2, jint a3, jint a4, jbyte a5)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(11),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jboolean android::media::JetPlayer::queueJetSegmentMuteArray(jint a0, jint a1, jint a2, jint a3, local_ref< array<jboolean,1> > const &a4, jbyte a5)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(12),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jboolean android::media::JetPlayer::setMuteFlags(jint a0, jboolean a1)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(13),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::media::JetPlayer::setMuteArray(local_ref< array<jboolean,1> > const &a0, jboolean a1)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(14),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::media::JetPlayer::setMuteFlag(jint a0, jboolean a1, jboolean a2)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(15),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::media::JetPlayer::triggerClip(jint a0)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(16),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::media::JetPlayer::clearQueue()
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(17),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

void android::media::JetPlayer::setEventListener(local_ref< android::media::JetPlayer_::OnJetEventListener > const &a0)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(18),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::media::JetPlayer::setEventListener(local_ref< android::media::JetPlayer_::OnJetEventListener > const &a0, local_ref< android::os::Handler > const &a1)
{
	return call_method<
		android::media::JetPlayer::J2CPP_CLASS_NAME,
		android::media::JetPlayer::J2CPP_METHOD_NAME(19),
		android::media::JetPlayer::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::media::JetPlayer,"android/media/JetPlayer")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,1,"getJetPlayer","()Landroid/media/JetPlayer;")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,2,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,3,"finalize","()V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,4,"release","()V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,5,"getMaxTracks","()I")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,6,"loadJetFile","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,7,"loadJetFile","(Landroid/content/res/AssetFileDescriptor;)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,8,"closeJetFile","()Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,9,"play","()Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,10,"pause","()Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,11,"queueJetSegment","(IIIIIB)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,12,"queueJetSegmentMuteArray","(IIII[ZB)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,13,"setMuteFlags","(IZ)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,14,"setMuteArray","([ZZ)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,15,"setMuteFlag","(IZZ)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,16,"triggerClip","(I)Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,17,"clearQueue","()Z")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,18,"setEventListener","(Landroid/media/JetPlayer$OnJetEventListener;)V")
J2CPP_DEFINE_METHOD(android::media::JetPlayer,19,"setEventListener","(Landroid/media/JetPlayer$OnJetEventListener;Landroid/os/Handler;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_JETPLAYER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
