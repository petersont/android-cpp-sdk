/*================================================================================
  code generated by: java2cpp
  class: javax.xml.parsers.FactoryConfigurationError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class FactoryConfigurationError;
	class FactoryConfigurationError
		: public cpp_object<FactoryConfigurationError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		FactoryConfigurationError(jobject jobj)
		: cpp_object<FactoryConfigurationError>(jobj)
		{
		}

		local_ref< java::lang::Exception > getException();
		local_ref< java::lang::String > getMessage();
	}; //class FactoryConfigurationError

} //namespace parsers
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::parsers::FactoryConfigurationError > create< javax::xml::parsers::FactoryConfigurationError>()
{
	return local_ref< javax::xml::parsers::FactoryConfigurationError >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME, javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(0), javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< javax::xml::parsers::FactoryConfigurationError > create< javax::xml::parsers::FactoryConfigurationError>(local_ref< java::lang::Exception > const &a0)
{
	return local_ref< javax::xml::parsers::FactoryConfigurationError >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME, javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(1), javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::parsers::FactoryConfigurationError > create< javax::xml::parsers::FactoryConfigurationError>(local_ref< java::lang::Exception > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::xml::parsers::FactoryConfigurationError >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME, javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(2), javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< javax::xml::parsers::FactoryConfigurationError > create< javax::xml::parsers::FactoryConfigurationError>(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::xml::parsers::FactoryConfigurationError >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME, javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(3), javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Exception > javax::xml::parsers::FactoryConfigurationError::getException()
{
	return local_ref< java::lang::Exception >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > javax::xml::parsers::FactoryConfigurationError::getMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::FactoryConfigurationError,"javax/xml/parsers/FactoryConfigurationError")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,1,"<init>","(Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,2,"<init>","(Ljava/lang/Exception;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,4,"getException","()Ljava/lang/Exception;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,5,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION