/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.acl.Group
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_GROUP_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACL_GROUP_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/Principal.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace security { namespace acl {

	class Group;
	class Group
		: public object<Group>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Group(jobject jobj)
		: object<Group>(jobj)
		{
		}

		operator local_ref<java::security::Principal>() const;
		operator local_ref<java::lang::Object>() const;


		jboolean addMember(local_ref< java::security::Principal >  const&);
		jboolean removeMember(local_ref< java::security::Principal >  const&);
		jboolean isMember(local_ref< java::security::Principal >  const&);
		local_ref< java::util::Enumeration > members();
	}; //class Group

} //namespace acl
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_GROUP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_GROUP_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACL_GROUP_HPP_IMPL

namespace j2cpp {



java::security::acl::Group::operator local_ref<java::security::Principal>() const
{
	return local_ref<java::security::Principal>(get_jobject());
}

java::security::acl::Group::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::security::acl::Group::addMember(local_ref< java::security::Principal > const &a0)
{
	return call_method<
		java::security::acl::Group::J2CPP_CLASS_NAME,
		java::security::acl::Group::J2CPP_METHOD_NAME(0),
		java::security::acl::Group::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::security::acl::Group::removeMember(local_ref< java::security::Principal > const &a0)
{
	return call_method<
		java::security::acl::Group::J2CPP_CLASS_NAME,
		java::security::acl::Group::J2CPP_METHOD_NAME(1),
		java::security::acl::Group::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::security::acl::Group::isMember(local_ref< java::security::Principal > const &a0)
{
	return call_method<
		java::security::acl::Group::J2CPP_CLASS_NAME,
		java::security::acl::Group::J2CPP_METHOD_NAME(2),
		java::security::acl::Group::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::Enumeration > java::security::acl::Group::members()
{
	return call_method<
		java::security::acl::Group::J2CPP_CLASS_NAME,
		java::security::acl::Group::J2CPP_METHOD_NAME(3),
		java::security::acl::Group::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::Enumeration >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::acl::Group,"java/security/acl/Group")
J2CPP_DEFINE_METHOD(java::security::acl::Group,0,"addMember","(Ljava/security/Principal;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::Group,1,"removeMember","(Ljava/security/Principal;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::Group,2,"isMember","(Ljava/security/Principal;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::Group,3,"members","()Ljava/util/Enumeration;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_GROUP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
