/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.ReadOnlyBufferException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class UnsupportedOperationException; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/UnsupportedOperationException.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class ReadOnlyBufferException;
	class ReadOnlyBufferException
		: public object<ReadOnlyBufferException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ReadOnlyBufferException(jobject jobj)
		: object<ReadOnlyBufferException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::UnsupportedOperationException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		ReadOnlyBufferException();
	}; //class ReadOnlyBufferException

} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::ReadOnlyBufferException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::nio::ReadOnlyBufferException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::nio::ReadOnlyBufferException::operator local_ref<java::lang::UnsupportedOperationException>() const
{
	return local_ref<java::lang::UnsupportedOperationException>(get_jobject());
}

java::nio::ReadOnlyBufferException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::nio::ReadOnlyBufferException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::nio::ReadOnlyBufferException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::nio::ReadOnlyBufferException::ReadOnlyBufferException()
: object<java::nio::ReadOnlyBufferException>(
	call_new_object<
		java::nio::ReadOnlyBufferException::J2CPP_CLASS_NAME,
		java::nio::ReadOnlyBufferException::J2CPP_METHOD_NAME(0),
		java::nio::ReadOnlyBufferException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::ReadOnlyBufferException,"java/nio/ReadOnlyBufferException")
J2CPP_DEFINE_METHOD(java::nio::ReadOnlyBufferException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
