/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.TimeKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_TIMEKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_TIMEKEYLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { class InputFilter; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class KeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class NumberKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class BaseKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MetaKeyKeyListener; } } } }


#include <android/text/InputFilter.hpp>
#include <android/text/method/BaseKeyListener.hpp>
#include <android/text/method/KeyListener.hpp>
#include <android/text/method/MetaKeyKeyListener.hpp>
#include <android/text/method/NumberKeyListener.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class TimeKeyListener;
	class TimeKeyListener
		: public object<TimeKeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit TimeKeyListener(jobject jobj)
		: object<TimeKeyListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::InputFilter>() const;
		operator local_ref<android::text::method::KeyListener>() const;
		operator local_ref<android::text::method::NumberKeyListener>() const;
		operator local_ref<android::text::method::BaseKeyListener>() const;
		operator local_ref<android::text::method::MetaKeyKeyListener>() const;


		TimeKeyListener();
		jint getInputType();
		static local_ref< android::text::method::TimeKeyListener > getInstance();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array<jchar,1> > > CHARACTERS;
	}; //class TimeKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_TIMEKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_TIMEKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_TIMEKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::TimeKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::method::TimeKeyListener::operator local_ref<android::text::InputFilter>() const
{
	return local_ref<android::text::InputFilter>(get_jobject());
}

android::text::method::TimeKeyListener::operator local_ref<android::text::method::KeyListener>() const
{
	return local_ref<android::text::method::KeyListener>(get_jobject());
}

android::text::method::TimeKeyListener::operator local_ref<android::text::method::NumberKeyListener>() const
{
	return local_ref<android::text::method::NumberKeyListener>(get_jobject());
}

android::text::method::TimeKeyListener::operator local_ref<android::text::method::BaseKeyListener>() const
{
	return local_ref<android::text::method::BaseKeyListener>(get_jobject());
}

android::text::method::TimeKeyListener::operator local_ref<android::text::method::MetaKeyKeyListener>() const
{
	return local_ref<android::text::method::MetaKeyKeyListener>(get_jobject());
}


android::text::method::TimeKeyListener::TimeKeyListener()
: object<android::text::method::TimeKeyListener>(
	call_new_object<
		android::text::method::TimeKeyListener::J2CPP_CLASS_NAME,
		android::text::method::TimeKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::TimeKeyListener::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jint android::text::method::TimeKeyListener::getInputType()
{
	return call_method<
		android::text::method::TimeKeyListener::J2CPP_CLASS_NAME,
		android::text::method::TimeKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::TimeKeyListener::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


local_ref< android::text::method::TimeKeyListener > android::text::method::TimeKeyListener::getInstance()
{
	return call_static_method<
		android::text::method::TimeKeyListener::J2CPP_CLASS_NAME,
		android::text::method::TimeKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::TimeKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::method::TimeKeyListener >
	>();
}



static_field<
	android::text::method::TimeKeyListener::J2CPP_CLASS_NAME,
	android::text::method::TimeKeyListener::J2CPP_FIELD_NAME(0),
	android::text::method::TimeKeyListener::J2CPP_FIELD_SIGNATURE(0),
	local_ref< array<jchar,1> >
> android::text::method::TimeKeyListener::CHARACTERS;


J2CPP_DEFINE_CLASS(android::text::method::TimeKeyListener,"android/text/method/TimeKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::TimeKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::TimeKeyListener,1,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::TimeKeyListener,2,"getAcceptedChars","()[C")
J2CPP_DEFINE_METHOD(android::text::method::TimeKeyListener,3,"getInstance","()Landroid/text/method/TimeKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::TimeKeyListener,4,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::method::TimeKeyListener,0,"CHARACTERS","[C")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_TIMEKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
