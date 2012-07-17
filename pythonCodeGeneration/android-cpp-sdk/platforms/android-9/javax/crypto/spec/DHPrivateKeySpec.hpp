/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.spec.DHPrivateKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class DHPrivateKeySpec;
	class DHPrivateKeySpec
		: public object<DHPrivateKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit DHPrivateKeySpec(jobject jobj)
		: object<DHPrivateKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		DHPrivateKeySpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getX();
		local_ref< java::math::BigInteger > getP();
		local_ref< java::math::BigInteger > getG();
	}; //class DHPrivateKeySpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::DHPrivateKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::spec::DHPrivateKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jobject());
}


javax::crypto::spec::DHPrivateKeySpec::DHPrivateKeySpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2)
: object<javax::crypto::spec::DHPrivateKeySpec>(
	call_new_object<
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_NAME(0),
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::math::BigInteger > javax::crypto::spec::DHPrivateKeySpec::getX()
{
	return call_method<
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_NAME(1),
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > javax::crypto::spec::DHPrivateKeySpec::getP()
{
	return call_method<
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_NAME(2),
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > javax::crypto::spec::DHPrivateKeySpec::getG()
{
	return call_method<
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_NAME(3),
		javax::crypto::spec::DHPrivateKeySpec::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::DHPrivateKeySpec,"javax/crypto/spec/DHPrivateKeySpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPrivateKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPrivateKeySpec,1,"getX","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPrivateKeySpec,2,"getP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPrivateKeySpec,3,"getG","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_DHPRIVATEKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
