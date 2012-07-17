/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.ext.DefaultHandler2
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_DEFAULTHANDLER2_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_DEFAULTHANDLER2_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class EntityResolver2; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class LexicalHandler; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class DeclHandler; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace helpers { class DefaultHandler; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/ext/DeclHandler.hpp>
#include <org/xml/sax/ext/EntityResolver2.hpp>
#include <org/xml/sax/ext/LexicalHandler.hpp>
#include <org/xml/sax/helpers/DefaultHandler.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class DefaultHandler2;
	class DefaultHandler2
		: public object<DefaultHandler2>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)

		explicit DefaultHandler2(jobject jobj)
		: object<DefaultHandler2>(jobj)
		{
		}

		operator local_ref<org::xml::sax::ErrorHandler>() const;
		operator local_ref<org::xml::sax::EntityResolver>() const;
		operator local_ref<org::xml::sax::ext::EntityResolver2>() const;
		operator local_ref<org::xml::sax::ext::LexicalHandler>() const;
		operator local_ref<org::xml::sax::ext::DeclHandler>() const;
		operator local_ref<org::xml::sax::helpers::DefaultHandler>() const;
		operator local_ref<org::xml::sax::DTDHandler>() const;
		operator local_ref<org::xml::sax::ContentHandler>() const;
		operator local_ref<java::lang::Object>() const;


		DefaultHandler2();
		void startCDATA();
		void endCDATA();
		void startDTD(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void endDTD();
		void startEntity(local_ref< java::lang::String >  const&);
		void endEntity(local_ref< java::lang::String >  const&);
		void comment(local_ref< array<jchar,1> >  const&, jint, jint);
		void attributeDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void elementDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void externalEntityDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void internalEntityDecl(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xml::sax::InputSource > getExternalSubset(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xml::sax::InputSource > resolveEntity(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xml::sax::InputSource > resolveEntity(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class DefaultHandler2

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_DEFAULTHANDLER2_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_DEFAULTHANDLER2_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_DEFAULTHANDLER2_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::ErrorHandler>() const
{
	return local_ref<org::xml::sax::ErrorHandler>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::EntityResolver>() const
{
	return local_ref<org::xml::sax::EntityResolver>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::ext::EntityResolver2>() const
{
	return local_ref<org::xml::sax::ext::EntityResolver2>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::ext::LexicalHandler>() const
{
	return local_ref<org::xml::sax::ext::LexicalHandler>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::ext::DeclHandler>() const
{
	return local_ref<org::xml::sax::ext::DeclHandler>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::helpers::DefaultHandler>() const
{
	return local_ref<org::xml::sax::helpers::DefaultHandler>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::DTDHandler>() const
{
	return local_ref<org::xml::sax::DTDHandler>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<org::xml::sax::ContentHandler>() const
{
	return local_ref<org::xml::sax::ContentHandler>(get_jobject());
}

org::xml::sax::ext::DefaultHandler2::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::xml::sax::ext::DefaultHandler2::DefaultHandler2()
: object<org::xml::sax::ext::DefaultHandler2>(
	call_new_object<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(0),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::xml::sax::ext::DefaultHandler2::startCDATA()
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(1),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void org::xml::sax::ext::DefaultHandler2::endCDATA()
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(2),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void org::xml::sax::ext::DefaultHandler2::startDTD(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(3),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::ext::DefaultHandler2::endDTD()
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(4),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void org::xml::sax::ext::DefaultHandler2::startEntity(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(5),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::ext::DefaultHandler2::endEntity(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(6),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::ext::DefaultHandler2::comment(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(7),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::ext::DefaultHandler2::attributeDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(8),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}

void org::xml::sax::ext::DefaultHandler2::elementDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(9),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void org::xml::sax::ext::DefaultHandler2::externalEntityDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(10),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::ext::DefaultHandler2::internalEntityDecl(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(11),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< org::xml::sax::InputSource > org::xml::sax::ext::DefaultHandler2::getExternalSubset(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(12),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject(), a0, a1);
}

local_ref< org::xml::sax::InputSource > org::xml::sax::ext::DefaultHandler2::resolveEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(13),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< org::xml::sax::InputSource > org::xml::sax::ext::DefaultHandler2::resolveEntity(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::DefaultHandler2::J2CPP_CLASS_NAME,
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_NAME(14),
		org::xml::sax::ext::DefaultHandler2::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< org::xml::sax::InputSource >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::DefaultHandler2,"org/xml/sax/ext/DefaultHandler2")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,1,"startCDATA","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,2,"endCDATA","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,3,"startDTD","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,4,"endDTD","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,5,"startEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,6,"endEntity","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,7,"comment","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,8,"attributeDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,9,"elementDecl","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,10,"externalEntityDecl","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,11,"internalEntityDecl","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,12,"getExternalSubset","(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,13,"resolveEntity","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::DefaultHandler2,14,"resolveEntity","(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_DEFAULTHANDLER2_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
