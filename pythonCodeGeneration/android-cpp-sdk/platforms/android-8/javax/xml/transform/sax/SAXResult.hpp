/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.sax.SAXResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXRESULT_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXRESULT_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class LexicalHandler; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Result; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/Result.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/ext/LexicalHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace sax {

	class SAXResult;
	class SAXResult
		: public object<SAXResult>
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
		J2CPP_DECLARE_FIELD(0)

		explicit SAXResult(jobject jobj)
		: object<SAXResult>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::xml::transform::Result>() const;


		SAXResult();
		SAXResult(local_ref< org::xml::sax::ContentHandler > const&);
		void setHandler(local_ref< org::xml::sax::ContentHandler >  const&);
		local_ref< org::xml::sax::ContentHandler > getHandler();
		void setLexicalHandler(local_ref< org::xml::sax::ext::LexicalHandler >  const&);
		local_ref< org::xml::sax::ext::LexicalHandler > getLexicalHandler();
		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSystemId();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > FEATURE;
	}; //class SAXResult

} //namespace sax
} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXRESULT_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXRESULT_HPP_IMPL

namespace j2cpp {



javax::xml::transform::sax::SAXResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::transform::sax::SAXResult::operator local_ref<javax::xml::transform::Result>() const
{
	return local_ref<javax::xml::transform::Result>(get_jobject());
}


javax::xml::transform::sax::SAXResult::SAXResult()
: object<javax::xml::transform::sax::SAXResult>(
	call_new_object<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(0),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



javax::xml::transform::sax::SAXResult::SAXResult(local_ref< org::xml::sax::ContentHandler > const &a0)
: object<javax::xml::transform::sax::SAXResult>(
	call_new_object<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(1),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void javax::xml::transform::sax::SAXResult::setHandler(local_ref< org::xml::sax::ContentHandler > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(2),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ContentHandler > javax::xml::transform::sax::SAXResult::getHandler()
{
	return call_method<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(3),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::xml::sax::ContentHandler >
	>(get_jobject());
}

void javax::xml::transform::sax::SAXResult::setLexicalHandler(local_ref< org::xml::sax::ext::LexicalHandler > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(4),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< org::xml::sax::ext::LexicalHandler > javax::xml::transform::sax::SAXResult::getLexicalHandler()
{
	return call_method<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(5),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::xml::sax::ext::LexicalHandler >
	>(get_jobject());
}

void javax::xml::transform::sax::SAXResult::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(6),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > javax::xml::transform::sax::SAXResult::getSystemId()
{
	return call_method<
		javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_NAME(7),
		javax::xml::transform::sax::SAXResult::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}


static_field<
	javax::xml::transform::sax::SAXResult::J2CPP_CLASS_NAME,
	javax::xml::transform::sax::SAXResult::J2CPP_FIELD_NAME(0),
	javax::xml::transform::sax::SAXResult::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::sax::SAXResult::FEATURE;


J2CPP_DEFINE_CLASS(javax::xml::transform::sax::SAXResult,"javax/xml/transform/sax/SAXResult")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,1,"<init>","(Lorg/xml/sax/ContentHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,2,"setHandler","(Lorg/xml/sax/ContentHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,3,"getHandler","()Lorg/xml/sax/ContentHandler;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,4,"setLexicalHandler","(Lorg/xml/sax/ext/LexicalHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,5,"getLexicalHandler","()Lorg/xml/sax/ext/LexicalHandler;")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,6,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::sax::SAXResult,7,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(javax::xml::transform::sax::SAXResult,0,"FEATURE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_SAX_SAXRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
