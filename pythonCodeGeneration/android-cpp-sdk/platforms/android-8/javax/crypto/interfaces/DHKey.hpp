/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.interfaces.DHKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_INTERFACES_DHKEY_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_INTERFACES_DHKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace crypto { namespace spec { class DHParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <javax/crypto/spec/DHParameterSpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace interfaces {

	class DHKey;
	class DHKey
		: public object<DHKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit DHKey(jobject jobj)
		: object<DHKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< javax::crypto::spec::DHParameterSpec > getParams();
	}; //class DHKey

} //namespace interfaces
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_INTERFACES_DHKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_INTERFACES_DHKEY_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_INTERFACES_DHKEY_HPP_IMPL

namespace j2cpp {



javax::crypto::interfaces::DHKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< javax::crypto::spec::DHParameterSpec > javax::crypto::interfaces::DHKey::getParams()
{
	return call_method<
		javax::crypto::interfaces::DHKey::J2CPP_CLASS_NAME,
		javax::crypto::interfaces::DHKey::J2CPP_METHOD_NAME(0),
		javax::crypto::interfaces::DHKey::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< javax::crypto::spec::DHParameterSpec >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::interfaces::DHKey,"javax/crypto/interfaces/DHKey")
J2CPP_DEFINE_METHOD(javax::crypto::interfaces::DHKey,0,"getParams","()Ljavax/crypto/spec/DHParameterSpec;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_INTERFACES_DHKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
