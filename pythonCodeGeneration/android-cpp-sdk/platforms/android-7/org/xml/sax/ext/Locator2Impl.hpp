/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.ext.Locator2Impl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class Locator2; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace helpers { class LocatorImpl; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/Locator.hpp>
#include <org/xml/sax/ext/Locator2.hpp>
#include <org/xml/sax/helpers/LocatorImpl.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class Locator2Impl;
	class Locator2Impl
		: public object<Locator2Impl>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Locator2Impl(jobject jobj)
		: object<Locator2Impl>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::ext::Locator2>() const;
		operator local_ref<org::xml::sax::Locator>() const;
		operator local_ref<org::xml::sax::helpers::LocatorImpl>() const;


		Locator2Impl();
		Locator2Impl(local_ref< org::xml::sax::Locator > const&);
		local_ref< java::lang::String > getXMLVersion();
		local_ref< java::lang::String > getEncoding();
		void setXMLVersion(local_ref< java::lang::String >  const&);
		void setEncoding(local_ref< java::lang::String >  const&);
	}; //class Locator2Impl

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::Locator2Impl::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::ext::Locator2Impl::operator local_ref<org::xml::sax::ext::Locator2>() const
{
	return local_ref<org::xml::sax::ext::Locator2>(get_jobject());
}

org::xml::sax::ext::Locator2Impl::operator local_ref<org::xml::sax::Locator>() const
{
	return local_ref<org::xml::sax::Locator>(get_jobject());
}

org::xml::sax::ext::Locator2Impl::operator local_ref<org::xml::sax::helpers::LocatorImpl>() const
{
	return local_ref<org::xml::sax::helpers::LocatorImpl>(get_jobject());
}


org::xml::sax::ext::Locator2Impl::Locator2Impl()
: object<org::xml::sax::ext::Locator2Impl>(
	call_new_object<
		org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(0),
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::xml::sax::ext::Locator2Impl::Locator2Impl(local_ref< org::xml::sax::Locator > const &a0)
: object<org::xml::sax::ext::Locator2Impl>(
	call_new_object<
		org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(1),
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::String > org::xml::sax::ext::Locator2Impl::getXMLVersion()
{
	return call_method<
		org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(2),
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::xml::sax::ext::Locator2Impl::getEncoding()
{
	return call_method<
		org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(3),
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void org::xml::sax::ext::Locator2Impl::setXMLVersion(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(4),
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::ext::Locator2Impl::setEncoding(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::Locator2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_NAME(5),
		org::xml::sax::ext::Locator2Impl::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::Locator2Impl,"org/xml/sax/ext/Locator2Impl")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,1,"<init>","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,2,"getXMLVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,3,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,4,"setXMLVersion","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Locator2Impl,5,"setEncoding","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_LOCATOR2IMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
