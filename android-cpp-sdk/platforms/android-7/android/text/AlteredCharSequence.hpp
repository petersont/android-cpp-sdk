/*================================================================================
  code generated by: java2cpp
  class: android.text.AlteredCharSequence
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_DECL
#define J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace text { class GetChars; } } }


#include <android/text/GetChars.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class AlteredCharSequence;
	class AlteredCharSequence
		: public cpp_object<AlteredCharSequence>
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

		explicit AlteredCharSequence(jobject jobj)
		: cpp_object<AlteredCharSequence>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<android::text::GetChars>() const;


		static local_ref< android::text::AlteredCharSequence > make(local_ref< java::lang::CharSequence > const&, local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_char charAt(cpp_int const&);
		cpp_int length();
		local_ref< java::lang::CharSequence > subSequence(cpp_int const&, cpp_int const&);
		void getChars(cpp_int const&, cpp_int const&, local_ref< cpp_char_array<1> > const&, cpp_int const&);
		local_ref< java::lang::String > toString();
	}; //class AlteredCharSequence

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_IMPL
#define J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_IMPL

namespace j2cpp {



android::text::AlteredCharSequence::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::text::AlteredCharSequence::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jtype());
}

android::text::AlteredCharSequence::operator local_ref<android::text::GetChars>() const
{
	return local_ref<android::text::GetChars>(get_jtype());
}


local_ref< android::text::AlteredCharSequence > android::text::AlteredCharSequence::make(local_ref< java::lang::CharSequence > const &a0, local_ref< cpp_char_array<1> > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::text::AlteredCharSequence >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_char android::text::AlteredCharSequence::charAt(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::AlteredCharSequence::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::text::AlteredCharSequence::subSequence(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::AlteredCharSequence::getChars(cpp_int const &a0, cpp_int const &a1, local_ref< cpp_char_array<1> > const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::AlteredCharSequence::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::AlteredCharSequence,"android/text/AlteredCharSequence")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,1,"make","(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,2,"charAt","(I)C")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,3,"length","()I")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,4,"subSequence","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,5,"getChars","(II[CI)V")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION