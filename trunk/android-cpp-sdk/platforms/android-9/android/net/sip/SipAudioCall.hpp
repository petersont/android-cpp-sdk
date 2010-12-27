/*================================================================================
  code generated by: java2cpp
  class: android.net.sip.SipAudioCall
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_SIP_SIPAUDIOCALL_HPP_DECL
#define J2CPP_ANDROID_NET_SIP_SIPAUDIOCALL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace net { namespace sip { class SipSession; } } } }
namespace j2cpp { namespace android { namespace net { namespace sip { namespace SipAudioCall_ { class Listener; } } } } }
namespace j2cpp { namespace android { namespace net { namespace sip { class SipProfile; } } } }
namespace j2cpp { namespace android { namespace os { class Message; } } }


#include <android/content/Context.hpp>
#include <android/net/sip/SipAudioCall.hpp>
#include <android/net/sip/SipProfile.hpp>
#include <android/net/sip/SipSession.hpp>
#include <android/os/Message.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net { namespace sip {

	class SipAudioCall;
	namespace SipAudioCall_ {

		class Listener;
		class Listener
			: public cpp_object<Listener>
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

			Listener(jobject jobj)
			: cpp_object<Listener>(jobj)
			{
			}

			void onReadyToCall(local_ref< android::net::sip::SipAudioCall > const&);
			void onCalling(local_ref< android::net::sip::SipAudioCall > const&);
			void onRinging(local_ref< android::net::sip::SipAudioCall > const&, local_ref< android::net::sip::SipProfile > const&);
			void onRingingBack(local_ref< android::net::sip::SipAudioCall > const&);
			void onCallEstablished(local_ref< android::net::sip::SipAudioCall > const&);
			void onCallEnded(local_ref< android::net::sip::SipAudioCall > const&);
			void onCallBusy(local_ref< android::net::sip::SipAudioCall > const&);
			void onCallHeld(local_ref< android::net::sip::SipAudioCall > const&);
			void onError(local_ref< android::net::sip::SipAudioCall > const&, cpp_int const&, local_ref< java::lang::String > const&);
			void onChanged(local_ref< android::net::sip::SipAudioCall > const&);
		}; //class Listener

	} //namespace SipAudioCall_

	class SipAudioCall
		: public cpp_object<SipAudioCall>
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

		typedef SipAudioCall_::Listener Listener;

		SipAudioCall(jobject jobj)
		: cpp_object<SipAudioCall>(jobj)
		{
		}

		void setListener(local_ref< android::net::sip::SipAudioCall_::Listener > const&);
		void setListener(local_ref< android::net::sip::SipAudioCall_::Listener > const&, cpp_boolean const&);
		cpp_boolean isInCall();
		cpp_boolean isOnHold();
		void close();
		local_ref< android::net::sip::SipProfile > getLocalProfile();
		local_ref< android::net::sip::SipProfile > getPeerProfile();
		cpp_int getState();
		void attachCall(local_ref< android::net::sip::SipSession > const&, local_ref< java::lang::String > const&);
		void makeCall(local_ref< android::net::sip::SipProfile > const&, local_ref< android::net::sip::SipSession > const&, cpp_int const&);
		void endCall();
		void holdCall(cpp_int const&);
		void answerCall(cpp_int const&);
		void continueCall(cpp_int const&);
		void toggleMute();
		cpp_boolean isMuted();
		void setSpeakerMode(cpp_boolean const&);
		void sendDtmf(cpp_int const&);
		void sendDtmf(cpp_int const&, local_ref< android::os::Message > const&);
		void startAudio();
	}; //class SipAudioCall

} //namespace sip
} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_SIP_SIPAUDIOCALL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_SIP_SIPAUDIOCALL_HPP_IMPL
#define J2CPP_ANDROID_NET_SIP_SIPAUDIOCALL_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::net::sip::SipAudioCall_::Listener > create< android::net::sip::SipAudioCall_::Listener>()
{
	return local_ref< android::net::sip::SipAudioCall_::Listener >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::sip::SipAudioCall_::Listener::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::sip::SipAudioCall_::Listener::J2CPP_CLASS_NAME, android::net::sip::SipAudioCall_::Listener::J2CPP_METHOD_NAME(0), android::net::sip::SipAudioCall_::Listener::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onReadyToCall(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onCalling(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onRinging(local_ref< android::net::sip::SipAudioCall > const &a0, local_ref< android::net::sip::SipProfile > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onRingingBack(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onCallEstablished(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onCallEnded(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onCallBusy(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onCallHeld(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onError(local_ref< android::net::sip::SipAudioCall > const &a0, cpp_int const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall_::Listener::onChanged(local_ref< android::net::sip::SipAudioCall > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::sip::SipAudioCall_::Listener,"android/net/sip/SipAudioCall$Listener")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,1,"onReadyToCall","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,2,"onCalling","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,3,"onRinging","(Landroid/net/sip/SipAudioCall;Landroid/net/sip/SipProfile;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,4,"onRingingBack","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,5,"onCallEstablished","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,6,"onCallEnded","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,7,"onCallBusy","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,8,"onCallHeld","(Landroid/net/sip/SipAudioCall;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,9,"onError","(Landroid/net/sip/SipAudioCall;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall_::Listener,10,"onChanged","(Landroid/net/sip/SipAudioCall;)V")


template <>
local_ref< android::net::sip::SipAudioCall > create< android::net::sip::SipAudioCall>(local_ref< android::content::Context > const &a0, local_ref< android::net::sip::SipProfile > const &a1)
{
	return local_ref< android::net::sip::SipAudioCall >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::sip::SipAudioCall::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::sip::SipAudioCall::J2CPP_CLASS_NAME, android::net::sip::SipAudioCall::J2CPP_METHOD_NAME(0), android::net::sip::SipAudioCall::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::setListener(local_ref< android::net::sip::SipAudioCall_::Listener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::setListener(local_ref< android::net::sip::SipAudioCall_::Listener > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::net::sip::SipAudioCall::isInCall()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::net::sip::SipAudioCall::isOnHold()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::net::sip::SipAudioCall::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::net::sip::SipProfile > android::net::sip::SipAudioCall::getLocalProfile()
{
	return local_ref< android::net::sip::SipProfile >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< android::net::sip::SipProfile > android::net::sip::SipAudioCall::getPeerProfile()
{
	return local_ref< android::net::sip::SipProfile >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int android::net::sip::SipAudioCall::getState()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::net::sip::SipAudioCall::attachCall(local_ref< android::net::sip::SipSession > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::makeCall(local_ref< android::net::sip::SipProfile > const &a0, local_ref< android::net::sip::SipSession > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::endCall()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::net::sip::SipAudioCall::holdCall(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::answerCall(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::continueCall(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::toggleMute()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_boolean android::net::sip::SipAudioCall::isMuted()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::net::sip::SipAudioCall::setSpeakerMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::sendDtmf(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::sendDtmf(cpp_int const &a0, local_ref< android::os::Message > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::net::sip::SipAudioCall::startAudio()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::sip::SipAudioCall,"android/net/sip/SipAudioCall")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,0,"<init>","(Landroid/content/Context;Landroid/net/sip/SipProfile;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,1,"setListener","(Landroid/net/sip/SipAudioCall$Listener;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,2,"setListener","(Landroid/net/sip/SipAudioCall$Listener;Z)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,3,"isInCall","()Z")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,4,"isOnHold","()Z")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,5,"close","()V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,6,"getLocalProfile","()Landroid/net/sip/SipProfile;")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,7,"getPeerProfile","()Landroid/net/sip/SipProfile;")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,8,"getState","()I")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,9,"attachCall","(Landroid/net/sip/SipSession;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,10,"makeCall","(Landroid/net/sip/SipProfile;Landroid/net/sip/SipSession;I)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,11,"endCall","()V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,12,"holdCall","(I)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,13,"answerCall","(I)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,14,"continueCall","(I)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,15,"toggleMute","()V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,16,"isMuted","()Z")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,17,"setSpeakerMode","(Z)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,18,"sendDtmf","(I)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,19,"sendDtmf","(ILandroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::net::sip::SipAudioCall,20,"startAudio","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_SIP_SIPAUDIOCALL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION