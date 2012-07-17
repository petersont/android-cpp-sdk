/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.ext.EntityResolver2
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_ENTITYRESOLVER2_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_ENTITYRESOLVER2_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/InputSource.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class EntityResolver2;
	class EntityResolver2
		: public object<EntityResolver2>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit EntityResolver2(jobject jobj)
		: object<EntityResolver2>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::EntityResolver>() const;


		local_ref< org::xml::sax::InputSource > getExternalSubset(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xml::sax::InputSource > resolveEntity(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class EntityResolver2

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_ENTITYRESOLVER2_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_ENTITYRESOLVER2_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_ENTITYRESOLVER2_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::EntityResolver2::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::ext::EntityResolver2::operator local_ref<org::xml::sax::EntityResolver>() const
{
	return local_ref<org::xml::sax::EntityResolver>(get_jobject());
}

local_ref< org::xml::sax::InputSource > org::xml::sax::ext::EntityResolver2::getExternalSubset(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::EntityResolver2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::EntityResolver2::J2CPP_METHOD_NAME(0),
		org::xml::sax::ext::EntityResolver2::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject(), a0, a1);
}

local_ref< org::xml::sax::InputSource > org::xml::sax::ext::EntityResolver2::resolveEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		org::xml::sax::ext::EntityResolver2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::EntityResolver2::J2CPP_METHOD_NAME(1),
		org::xml::sax::ext::EntityResolver2::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::EntityResolver2,"org/xml/sax/ext/EntityResolver2")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::EntityResolver2,0,"getExternalSubset","(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::EntityResolver2,1,"resolveEntity","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_ENTITYRESOLVER2_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
