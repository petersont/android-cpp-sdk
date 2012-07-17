/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.PhoneNumberFormattingTextWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class TextWatcher; } } }
namespace j2cpp { namespace android { namespace text { class NoCopySpan; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/Editable.hpp>
#include <android/text/NoCopySpan.hpp>
#include <android/text/TextWatcher.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class PhoneNumberFormattingTextWatcher;
	class PhoneNumberFormattingTextWatcher
		: public object<PhoneNumberFormattingTextWatcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit PhoneNumberFormattingTextWatcher(jobject jobj)
		: object<PhoneNumberFormattingTextWatcher>(jobj)
		{
		}

		operator local_ref<android::text::TextWatcher>() const;
		operator local_ref<android::text::NoCopySpan>() const;
		operator local_ref<java::lang::Object>() const;


		PhoneNumberFormattingTextWatcher();
		void afterTextChanged(local_ref< android::text::Editable >  const&);
		void beforeTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		void onTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
	}; //class PhoneNumberFormattingTextWatcher

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_IMPL

namespace j2cpp {



android::telephony::PhoneNumberFormattingTextWatcher::operator local_ref<android::text::TextWatcher>() const
{
	return local_ref<android::text::TextWatcher>(get_jobject());
}

android::telephony::PhoneNumberFormattingTextWatcher::operator local_ref<android::text::NoCopySpan>() const
{
	return local_ref<android::text::NoCopySpan>(get_jobject());
}

android::telephony::PhoneNumberFormattingTextWatcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::telephony::PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher()
: object<android::telephony::PhoneNumberFormattingTextWatcher>(
	call_new_object<
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_CLASS_NAME,
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_NAME(0),
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::telephony::PhoneNumberFormattingTextWatcher::afterTextChanged(local_ref< android::text::Editable > const &a0)
{
	return call_method<
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_CLASS_NAME,
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_NAME(1),
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::telephony::PhoneNumberFormattingTextWatcher::beforeTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_CLASS_NAME,
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_NAME(2),
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::telephony::PhoneNumberFormattingTextWatcher::onTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_CLASS_NAME,
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_NAME(3),
		android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::telephony::PhoneNumberFormattingTextWatcher,"android/telephony/PhoneNumberFormattingTextWatcher")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,1,"afterTextChanged","(Landroid/text/Editable;)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,2,"beforeTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,3,"onTextChanged","(Ljava/lang/CharSequence;III)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
