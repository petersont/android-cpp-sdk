/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.DateKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_DATEKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_DATEKEYLISTENER_HPP_DECL


namespace j2cpp { namespace android { namespace text { namespace method { class BaseKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MetaKeyKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class KeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class NumberKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { class InputFilter; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/InputFilter.hpp>
#include <android/text/method/BaseKeyListener.hpp>
#include <android/text/method/KeyListener.hpp>
#include <android/text/method/MetaKeyKeyListener.hpp>
#include <android/text/method/NumberKeyListener.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class DateKeyListener;
	class DateKeyListener
		: public object<DateKeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit DateKeyListener(jobject jobj)
		: object<DateKeyListener>(jobj)
		{
		}

		operator local_ref<android::text::method::BaseKeyListener>() const;
		operator local_ref<android::text::method::MetaKeyKeyListener>() const;
		operator local_ref<android::text::method::KeyListener>() const;
		operator local_ref<android::text::method::NumberKeyListener>() const;
		operator local_ref<android::text::InputFilter>() const;
		operator local_ref<java::lang::Object>() const;


		DateKeyListener();
		jint getInputType();
		static local_ref< android::text::method::DateKeyListener > getInstance();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array<jchar,1> > > CHARACTERS;
	}; //class DateKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_DATEKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_DATEKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_DATEKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::DateKeyListener::operator local_ref<android::text::method::BaseKeyListener>() const
{
	return local_ref<android::text::method::BaseKeyListener>(get_jobject());
}

android::text::method::DateKeyListener::operator local_ref<android::text::method::MetaKeyKeyListener>() const
{
	return local_ref<android::text::method::MetaKeyKeyListener>(get_jobject());
}

android::text::method::DateKeyListener::operator local_ref<android::text::method::KeyListener>() const
{
	return local_ref<android::text::method::KeyListener>(get_jobject());
}

android::text::method::DateKeyListener::operator local_ref<android::text::method::NumberKeyListener>() const
{
	return local_ref<android::text::method::NumberKeyListener>(get_jobject());
}

android::text::method::DateKeyListener::operator local_ref<android::text::InputFilter>() const
{
	return local_ref<android::text::InputFilter>(get_jobject());
}

android::text::method::DateKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::method::DateKeyListener::DateKeyListener()
: object<android::text::method::DateKeyListener>(
	call_new_object<
		android::text::method::DateKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DateKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::DateKeyListener::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jint android::text::method::DateKeyListener::getInputType()
{
	return call_method<
		android::text::method::DateKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DateKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::DateKeyListener::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


local_ref< android::text::method::DateKeyListener > android::text::method::DateKeyListener::getInstance()
{
	return call_static_method<
		android::text::method::DateKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DateKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::DateKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::method::DateKeyListener >
	>();
}



static_field<
	android::text::method::DateKeyListener::J2CPP_CLASS_NAME,
	android::text::method::DateKeyListener::J2CPP_FIELD_NAME(0),
	android::text::method::DateKeyListener::J2CPP_FIELD_SIGNATURE(0),
	local_ref< array<jchar,1> >
> android::text::method::DateKeyListener::CHARACTERS;


J2CPP_DEFINE_CLASS(android::text::method::DateKeyListener,"android/text/method/DateKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::DateKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::DateKeyListener,1,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::DateKeyListener,2,"getAcceptedChars","()[C")
J2CPP_DEFINE_METHOD(android::text::method::DateKeyListener,3,"getInstance","()Landroid/text/method/DateKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::DateKeyListener,4,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::method::DateKeyListener,0,"CHARACTERS","[C")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_DATEKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
