/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.NotActiveException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class ObjectStreamException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/IOException.hpp>
#include <java/io/ObjectStreamException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace io {

	class NotActiveException;
	class NotActiveException
		: public object<NotActiveException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NotActiveException(jobject jobj)
		: object<NotActiveException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::io::ObjectStreamException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		NotActiveException();
		NotActiveException(local_ref< java::lang::String > const&);
	}; //class NotActiveException

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::io::NotActiveException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::io::NotActiveException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::io::NotActiveException::operator local_ref<java::io::ObjectStreamException>() const
{
	return local_ref<java::io::ObjectStreamException>(get_jobject());
}

java::io::NotActiveException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::io::NotActiveException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::io::NotActiveException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::NotActiveException::NotActiveException()
: object<java::io::NotActiveException>(
	call_new_object<
		java::io::NotActiveException::J2CPP_CLASS_NAME,
		java::io::NotActiveException::J2CPP_METHOD_NAME(0),
		java::io::NotActiveException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::io::NotActiveException::NotActiveException(local_ref< java::lang::String > const &a0)
: object<java::io::NotActiveException>(
	call_new_object<
		java::io::NotActiveException::J2CPP_CLASS_NAME,
		java::io::NotActiveException::J2CPP_METHOD_NAME(1),
		java::io::NotActiveException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::io::NotActiveException,"java/io/NotActiveException")
J2CPP_DEFINE_METHOD(java::io::NotActiveException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::NotActiveException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
