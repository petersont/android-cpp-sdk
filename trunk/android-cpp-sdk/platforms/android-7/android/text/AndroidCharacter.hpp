/*================================================================================
  code generated by: java2cpp
  class: android.text.AndroidCharacter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ANDROIDCHARACTER_HPP_DECL
#define J2CPP_ANDROID_TEXT_ANDROIDCHARACTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class AndroidCharacter;
	class AndroidCharacter
		: public cpp_object<AndroidCharacter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit AndroidCharacter(jobject jobj)
		: cpp_object<AndroidCharacter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AndroidCharacter();
		static void getDirectionalities(local_ref< cpp_char_array<1> > const&, local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		static cpp_boolean mirror(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		static cpp_char getMirror(cpp_char const&);
	}; //class AndroidCharacter

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ANDROIDCHARACTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ANDROIDCHARACTER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_ANDROIDCHARACTER_HPP_IMPL

namespace j2cpp {



android::text::AndroidCharacter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::text::AndroidCharacter::AndroidCharacter()
: cpp_object<android::text::AndroidCharacter>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::AndroidCharacter::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::AndroidCharacter::J2CPP_CLASS_NAME, android::text::AndroidCharacter::J2CPP_METHOD_NAME(0), android::text::AndroidCharacter::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void android::text::AndroidCharacter::getDirectionalities(local_ref< cpp_char_array<1> > const &a0, local_ref< cpp_byte_array<1> > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::text::AndroidCharacter::mirror(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_char android::text::AndroidCharacter::getMirror(cpp_char const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallStaticCharMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::AndroidCharacter,"android/text/AndroidCharacter")
J2CPP_DEFINE_METHOD(android::text::AndroidCharacter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::AndroidCharacter,1,"getDirectionalities","([C[BI)V")
J2CPP_DEFINE_METHOD(android::text::AndroidCharacter,2,"mirror","([CII)Z")
J2CPP_DEFINE_METHOD(android::text::AndroidCharacter,3,"getMirror","(C)C")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ANDROIDCHARACTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION