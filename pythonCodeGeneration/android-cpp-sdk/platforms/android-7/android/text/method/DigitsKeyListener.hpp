/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.DigitsKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_DIGITSKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_DIGITSKEYLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace text { class InputFilter; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class KeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class BaseKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MetaKeyKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class NumberKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { class Spanned; } } }


#include <android/text/InputFilter.hpp>
#include <android/text/Spanned.hpp>
#include <android/text/method/BaseKeyListener.hpp>
#include <android/text/method/KeyListener.hpp>
#include <android/text/method/MetaKeyKeyListener.hpp>
#include <android/text/method/NumberKeyListener.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class DigitsKeyListener;
	class DigitsKeyListener
		: public object<DigitsKeyListener>
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

		explicit DigitsKeyListener(jobject jobj)
		: object<DigitsKeyListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::InputFilter>() const;
		operator local_ref<android::text::method::KeyListener>() const;
		operator local_ref<android::text::method::BaseKeyListener>() const;
		operator local_ref<android::text::method::MetaKeyKeyListener>() const;
		operator local_ref<android::text::method::NumberKeyListener>() const;


		DigitsKeyListener();
		DigitsKeyListener(jboolean, jboolean);
		static local_ref< android::text::method::DigitsKeyListener > getInstance();
		static local_ref< android::text::method::DigitsKeyListener > getInstance(jboolean, jboolean);
		static local_ref< android::text::method::DigitsKeyListener > getInstance(local_ref< java::lang::String >  const&);
		jint getInputType();
		local_ref< java::lang::CharSequence > filter(local_ref< java::lang::CharSequence >  const&, jint, jint, local_ref< android::text::Spanned >  const&, jint, jint);
	}; //class DigitsKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_DIGITSKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_DIGITSKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_DIGITSKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::DigitsKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::method::DigitsKeyListener::operator local_ref<android::text::InputFilter>() const
{
	return local_ref<android::text::InputFilter>(get_jobject());
}

android::text::method::DigitsKeyListener::operator local_ref<android::text::method::KeyListener>() const
{
	return local_ref<android::text::method::KeyListener>(get_jobject());
}

android::text::method::DigitsKeyListener::operator local_ref<android::text::method::BaseKeyListener>() const
{
	return local_ref<android::text::method::BaseKeyListener>(get_jobject());
}

android::text::method::DigitsKeyListener::operator local_ref<android::text::method::MetaKeyKeyListener>() const
{
	return local_ref<android::text::method::MetaKeyKeyListener>(get_jobject());
}

android::text::method::DigitsKeyListener::operator local_ref<android::text::method::NumberKeyListener>() const
{
	return local_ref<android::text::method::NumberKeyListener>(get_jobject());
}


android::text::method::DigitsKeyListener::DigitsKeyListener()
: object<android::text::method::DigitsKeyListener>(
	call_new_object<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::text::method::DigitsKeyListener::DigitsKeyListener(jboolean a0, jboolean a1)
: object<android::text::method::DigitsKeyListener>(
	call_new_object<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



local_ref< android::text::method::DigitsKeyListener > android::text::method::DigitsKeyListener::getInstance()
{
	return call_static_method<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::method::DigitsKeyListener >
	>();
}

local_ref< android::text::method::DigitsKeyListener > android::text::method::DigitsKeyListener::getInstance(jboolean a0, jboolean a1)
{
	return call_static_method<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(4),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::text::method::DigitsKeyListener >
	>(a0, a1);
}

local_ref< android::text::method::DigitsKeyListener > android::text::method::DigitsKeyListener::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(5),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::text::method::DigitsKeyListener >
	>(a0);
}

jint android::text::method::DigitsKeyListener::getInputType()
{
	return call_method<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(6),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::lang::CharSequence > android::text::method::DigitsKeyListener::filter(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, local_ref< android::text::Spanned > const &a3, jint a4, jint a5)
{
	return call_method<
		android::text::method::DigitsKeyListener::J2CPP_CLASS_NAME,
		android::text::method::DigitsKeyListener::J2CPP_METHOD_NAME(7),
		android::text::method::DigitsKeyListener::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}


J2CPP_DEFINE_CLASS(android::text::method::DigitsKeyListener,"android/text/method/DigitsKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,1,"<init>","(ZZ)V")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,2,"getAcceptedChars","()[C")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,3,"getInstance","()Landroid/text/method/DigitsKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,4,"getInstance","(ZZ)Landroid/text/method/DigitsKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,5,"getInstance","(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,6,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::DigitsKeyListener,7,"filter","(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_DIGITSKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
