/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.FileHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FILEHANDLER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_FILEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class Handler; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class StreamHandler; } } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/logging/Handler.hpp>
#include <java/util/logging/LogRecord.hpp>
#include <java/util/logging/StreamHandler.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class FileHandler;
	class FileHandler
		: public object<FileHandler>
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

		explicit FileHandler(jobject jobj)
		: object<FileHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::logging::Handler>() const;
		operator local_ref<java::util::logging::StreamHandler>() const;


		FileHandler();
		FileHandler(local_ref< java::lang::String > const&);
		FileHandler(local_ref< java::lang::String > const&, jboolean);
		FileHandler(local_ref< java::lang::String > const&, jint, jint);
		FileHandler(local_ref< java::lang::String > const&, jint, jint, jboolean);
		void close();
		void publish(local_ref< java::util::logging::LogRecord >  const&);
	}; //class FileHandler

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FILEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FILEHANDLER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_FILEHANDLER_HPP_IMPL

namespace j2cpp {



java::util::logging::FileHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::logging::FileHandler::operator local_ref<java::util::logging::Handler>() const
{
	return local_ref<java::util::logging::Handler>(get_jobject());
}

java::util::logging::FileHandler::operator local_ref<java::util::logging::StreamHandler>() const
{
	return local_ref<java::util::logging::StreamHandler>(get_jobject());
}


java::util::logging::FileHandler::FileHandler()
: object<java::util::logging::FileHandler>(
	call_new_object<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(0),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::logging::FileHandler::FileHandler(local_ref< java::lang::String > const &a0)
: object<java::util::logging::FileHandler>(
	call_new_object<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(1),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::logging::FileHandler::FileHandler(local_ref< java::lang::String > const &a0, jboolean a1)
: object<java::util::logging::FileHandler>(
	call_new_object<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(2),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::util::logging::FileHandler::FileHandler(local_ref< java::lang::String > const &a0, jint a1, jint a2)
: object<java::util::logging::FileHandler>(
	call_new_object<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(3),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1, a2)
)
{
}



java::util::logging::FileHandler::FileHandler(local_ref< java::lang::String > const &a0, jint a1, jint a2, jboolean a3)
: object<java::util::logging::FileHandler>(
	call_new_object<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(4),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1, a2, a3)
)
{
}


void java::util::logging::FileHandler::close()
{
	return call_method<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(5),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void java::util::logging::FileHandler::publish(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::FileHandler::J2CPP_CLASS_NAME,
		java::util::logging::FileHandler::J2CPP_METHOD_NAME(6),
		java::util::logging::FileHandler::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::logging::FileHandler,"java/util/logging/FileHandler")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,2,"<init>","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,3,"<init>","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,4,"<init>","(Ljava/lang/String;IIZ)V")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,5,"close","()V")
J2CPP_DEFINE_METHOD(java::util::logging::FileHandler,6,"publish","(Ljava/util/logging/LogRecord;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FILEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
