/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Permission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PERMISSION_HPP_DECL
#define J2CPP_JAVA_SECURITY_PERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }
namespace j2cpp { namespace java { namespace security { class Guard; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Guard.hpp>
#include <java/security/PermissionCollection.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Permission;
	class Permission
		: public object<Permission>
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
		J2CPP_DECLARE_METHOD(8)

		explicit Permission(jobject jobj)
		: object<Permission>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::Guard>() const;


		Permission(local_ref< java::lang::String > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > getActions();
		jboolean implies(local_ref< java::security::Permission >  const&);
		local_ref< java::lang::String > getName();
		void checkGuard(local_ref< java::lang::Object >  const&);
		local_ref< java::security::PermissionCollection > newPermissionCollection();
		local_ref< java::lang::String > toString();
	}; //class Permission

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PERMISSION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PERMISSION_HPP_IMPL

namespace j2cpp {



java::security::Permission::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::security::Permission::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::Permission::operator local_ref<java::security::Guard>() const
{
	return local_ref<java::security::Guard>(get_jobject());
}


java::security::Permission::Permission(local_ref< java::lang::String > const &a0)
: object<java::security::Permission>(
	call_new_object<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(0),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jboolean java::security::Permission::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(1),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

jint java::security::Permission::hashCode()
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(2),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::security::Permission::getActions()
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(3),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean java::security::Permission::implies(local_ref< java::security::Permission > const &a0)
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(4),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::Permission::getName()
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(5),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::security::Permission::checkGuard(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(6),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< java::security::PermissionCollection > java::security::Permission::newPermissionCollection()
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(7),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::security::PermissionCollection >
	>(get_jobject());
}

local_ref< java::lang::String > java::security::Permission::toString()
{
	return call_method<
		java::security::Permission::J2CPP_CLASS_NAME,
		java::security::Permission::J2CPP_METHOD_NAME(8),
		java::security::Permission::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::Permission,"java/security/Permission")
J2CPP_DEFINE_METHOD(java::security::Permission,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::Permission,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::Permission,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::Permission,3,"getActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Permission,4,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::Permission,5,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Permission,6,"checkGuard","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::security::Permission,7,"newPermissionCollection","()Ljava/security/PermissionCollection;")
J2CPP_DEFINE_METHOD(java::security::Permission,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
