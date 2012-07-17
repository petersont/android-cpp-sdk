/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.xpath.XPathConstants
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHCONSTANTS_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATHCONSTANTS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace namespace { class QName; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/namespace/QName.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPathConstants;
	class XPathConstants
		: public object<XPathConstants>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit XPathConstants(jobject jobj)
		: object<XPathConstants>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;



		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< javax::xml::namespace::QName > > NUMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< javax::xml::namespace::QName > > STRING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< javax::xml::namespace::QName > > BOOLEAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< javax::xml::namespace::QName > > NODESET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< javax::xml::namespace::QName > > NODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > DOM_OBJECT_MODEL;
	}; //class XPathConstants

} //namespace xpath
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHCONSTANTS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHCONSTANTS_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATHCONSTANTS_HPP_IMPL

namespace j2cpp {



javax::xml::xpath::XPathConstants::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	javax::xml::xpath::XPathConstants::J2CPP_CLASS_NAME,
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_NAME(0),
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_SIGNATURE(0),
	local_ref< javax::xml::namespace::QName >
> javax::xml::xpath::XPathConstants::NUMBER;

static_field<
	javax::xml::xpath::XPathConstants::J2CPP_CLASS_NAME,
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_NAME(1),
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_SIGNATURE(1),
	local_ref< javax::xml::namespace::QName >
> javax::xml::xpath::XPathConstants::STRING;

static_field<
	javax::xml::xpath::XPathConstants::J2CPP_CLASS_NAME,
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_NAME(2),
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_SIGNATURE(2),
	local_ref< javax::xml::namespace::QName >
> javax::xml::xpath::XPathConstants::BOOLEAN;

static_field<
	javax::xml::xpath::XPathConstants::J2CPP_CLASS_NAME,
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_NAME(3),
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_SIGNATURE(3),
	local_ref< javax::xml::namespace::QName >
> javax::xml::xpath::XPathConstants::NODESET;

static_field<
	javax::xml::xpath::XPathConstants::J2CPP_CLASS_NAME,
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_NAME(4),
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_SIGNATURE(4),
	local_ref< javax::xml::namespace::QName >
> javax::xml::xpath::XPathConstants::NODE;

static_field<
	javax::xml::xpath::XPathConstants::J2CPP_CLASS_NAME,
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_NAME(5),
	javax::xml::xpath::XPathConstants::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> javax::xml::xpath::XPathConstants::DOM_OBJECT_MODEL;


J2CPP_DEFINE_CLASS(javax::xml::xpath::XPathConstants,"javax/xml/xpath/XPathConstants")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathConstants,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathConstants,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(javax::xml::xpath::XPathConstants,0,"NUMBER","Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_FIELD(javax::xml::xpath::XPathConstants,1,"STRING","Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_FIELD(javax::xml::xpath::XPathConstants,2,"BOOLEAN","Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_FIELD(javax::xml::xpath::XPathConstants,3,"NODESET","Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_FIELD(javax::xml::xpath::XPathConstants,4,"NODE","Ljavax/xml/namespace/QName;")
J2CPP_DEFINE_FIELD(javax::xml::xpath::XPathConstants,5,"DOM_OBJECT_MODEL","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHCONSTANTS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
