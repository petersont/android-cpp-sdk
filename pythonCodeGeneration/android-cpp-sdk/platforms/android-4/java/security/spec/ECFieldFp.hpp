/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.ECFieldFp
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECFIELDFP_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECFIELDFP_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class ECField; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/ECField.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECFieldFp;
	class ECFieldFp
		: public object<ECFieldFp>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ECFieldFp(jobject jobj)
		: object<ECFieldFp>(jobj)
		{
		}

		operator local_ref<java::security::spec::ECField>() const;
		operator local_ref<java::lang::Object>() const;


		ECFieldFp(local_ref< java::math::BigInteger > const&);
		jint getFieldSize();
		local_ref< java::math::BigInteger > getP();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
	}; //class ECFieldFp

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECFIELDFP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECFIELDFP_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECFIELDFP_HPP_IMPL

namespace j2cpp {



java::security::spec::ECFieldFp::operator local_ref<java::security::spec::ECField>() const
{
	return local_ref<java::security::spec::ECField>(get_jobject());
}

java::security::spec::ECFieldFp::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::spec::ECFieldFp::ECFieldFp(local_ref< java::math::BigInteger > const &a0)
: object<java::security::spec::ECFieldFp>(
	call_new_object<
		java::security::spec::ECFieldFp::J2CPP_CLASS_NAME,
		java::security::spec::ECFieldFp::J2CPP_METHOD_NAME(0),
		java::security::spec::ECFieldFp::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint java::security::spec::ECFieldFp::getFieldSize()
{
	return call_method<
		java::security::spec::ECFieldFp::J2CPP_CLASS_NAME,
		java::security::spec::ECFieldFp::J2CPP_METHOD_NAME(1),
		java::security::spec::ECFieldFp::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::ECFieldFp::getP()
{
	return call_method<
		java::security::spec::ECFieldFp::J2CPP_CLASS_NAME,
		java::security::spec::ECFieldFp::J2CPP_METHOD_NAME(2),
		java::security::spec::ECFieldFp::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

jboolean java::security::spec::ECFieldFp::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::spec::ECFieldFp::J2CPP_CLASS_NAME,
		java::security::spec::ECFieldFp::J2CPP_METHOD_NAME(3),
		java::security::spec::ECFieldFp::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

jint java::security::spec::ECFieldFp::hashCode()
{
	return call_method<
		java::security::spec::ECFieldFp::J2CPP_CLASS_NAME,
		java::security::spec::ECFieldFp::J2CPP_METHOD_NAME(4),
		java::security::spec::ECFieldFp::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::ECFieldFp,"java/security/spec/ECFieldFp")
J2CPP_DEFINE_METHOD(java::security::spec::ECFieldFp,0,"<init>","(Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECFieldFp,1,"getFieldSize","()I")
J2CPP_DEFINE_METHOD(java::security::spec::ECFieldFp,2,"getP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::ECFieldFp,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::spec::ECFieldFp,4,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECFIELDFP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
