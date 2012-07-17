/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.URISyntaxException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URISYNTAXEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_URISYNTAXEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace net {

	class URISyntaxException;
	class URISyntaxException
		: public object<URISyntaxException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit URISyntaxException(jobject jobj)
		: object<URISyntaxException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		URISyntaxException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint);
		URISyntaxException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		jint getIndex();
		local_ref< java::lang::String > getReason();
		local_ref< java::lang::String > getInput();
		local_ref< java::lang::String > getMessage();
	}; //class URISyntaxException

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URISYNTAXEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URISYNTAXEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_URISYNTAXEXCEPTION_HPP_IMPL

namespace j2cpp {



java::net::URISyntaxException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::net::URISyntaxException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::net::URISyntaxException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::net::URISyntaxException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::net::URISyntaxException::URISyntaxException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2)
: object<java::net::URISyntaxException>(
	call_new_object<
		java::net::URISyntaxException::J2CPP_CLASS_NAME,
		java::net::URISyntaxException::J2CPP_METHOD_NAME(0),
		java::net::URISyntaxException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}



java::net::URISyntaxException::URISyntaxException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::net::URISyntaxException>(
	call_new_object<
		java::net::URISyntaxException::J2CPP_CLASS_NAME,
		java::net::URISyntaxException::J2CPP_METHOD_NAME(1),
		java::net::URISyntaxException::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jint java::net::URISyntaxException::getIndex()
{
	return call_method<
		java::net::URISyntaxException::J2CPP_CLASS_NAME,
		java::net::URISyntaxException::J2CPP_METHOD_NAME(2),
		java::net::URISyntaxException::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URISyntaxException::getReason()
{
	return call_method<
		java::net::URISyntaxException::J2CPP_CLASS_NAME,
		java::net::URISyntaxException::J2CPP_METHOD_NAME(3),
		java::net::URISyntaxException::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URISyntaxException::getInput()
{
	return call_method<
		java::net::URISyntaxException::J2CPP_CLASS_NAME,
		java::net::URISyntaxException::J2CPP_METHOD_NAME(4),
		java::net::URISyntaxException::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URISyntaxException::getMessage()
{
	return call_method<
		java::net::URISyntaxException::J2CPP_CLASS_NAME,
		java::net::URISyntaxException::J2CPP_METHOD_NAME(5),
		java::net::URISyntaxException::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::URISyntaxException,"java/net/URISyntaxException")
J2CPP_DEFINE_METHOD(java::net::URISyntaxException,0,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::net::URISyntaxException,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URISyntaxException,2,"getIndex","()I")
J2CPP_DEFINE_METHOD(java::net::URISyntaxException,3,"getReason","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URISyntaxException,4,"getInput","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URISyntaxException,5,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URISYNTAXEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
