/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.PrivateKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVATEKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_PRIVATEKEY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/security/Key.hpp>


namespace j2cpp {

namespace java { namespace security {

	class PrivateKey;
	class PrivateKey
		: public object<PrivateKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)

		explicit PrivateKey(jobject jobj)
		: object<PrivateKey>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::security::Key>() const;
		operator local_ref<java::lang::Object>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > serialVersionUID;
	}; //class PrivateKey

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVATEKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVATEKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PRIVATEKEY_HPP_IMPL

namespace j2cpp {



java::security::PrivateKey::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::security::PrivateKey::operator local_ref<java::security::Key>() const
{
	return local_ref<java::security::Key>(get_jobject());
}

java::security::PrivateKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

static_field<
	java::security::PrivateKey::J2CPP_CLASS_NAME,
	java::security::PrivateKey::J2CPP_FIELD_NAME(0),
	java::security::PrivateKey::J2CPP_FIELD_SIGNATURE(0),
	jlong
> java::security::PrivateKey::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::PrivateKey,"java/security/PrivateKey")
J2CPP_DEFINE_FIELD(java::security::PrivateKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVATEKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
