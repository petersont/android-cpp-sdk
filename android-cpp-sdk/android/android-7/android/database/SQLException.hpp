/*================================================================================
  code generated by: java2cpp
  class: android.database.SQLException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class SQLException;
	class SQLException
		: public cpp_object<SQLException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		SQLException(jobject jobj)
		: cpp_object<SQLException>(jobj)
		{
		}

	}; //class SQLException

} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::database::SQLException > create< android::database::SQLException>()
{
	return local_ref< android::database::SQLException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::SQLException::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::SQLException::J2CPP_CLASS_NAME, android::database::SQLException::J2CPP_METHOD_NAME(0), android::database::SQLException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::database::SQLException > create< android::database::SQLException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::database::SQLException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::SQLException::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::SQLException::J2CPP_CLASS_NAME, android::database::SQLException::J2CPP_METHOD_NAME(1), android::database::SQLException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::database::SQLException,"android/database/SQLException")
J2CPP_DEFINE_METHOD(android::database::SQLException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::SQLException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION