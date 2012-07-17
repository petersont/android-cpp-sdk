/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xmlpull.v1.XmlSerializer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLSERIALIZER_HPP_DECL
#define J2CPP_ORG_XMLPULL_V1_XMLSERIALIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Boolean; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/OutputStream.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xmlpull { namespace v1 {

	class XmlSerializer;
	class XmlSerializer
		: public object<XmlSerializer>
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
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)

		explicit XmlSerializer(jobject jobj)
		: object<XmlSerializer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		jboolean getFeature(local_ref< java::lang::String >  const&);
		void setProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String >  const&);
		void setOutput(local_ref< java::io::OutputStream >  const&, local_ref< java::lang::String >  const&);
		void setOutput(local_ref< java::io::Writer >  const&);
		void startDocument(local_ref< java::lang::String >  const&, local_ref< java::lang::Boolean >  const&);
		void endDocument();
		void setPrefix(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getPrefix(local_ref< java::lang::String >  const&, jboolean);
		jint getDepth();
		local_ref< java::lang::String > getNamespace();
		local_ref< java::lang::String > getName();
		local_ref< org::xmlpull::v1::XmlSerializer > startTag(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xmlpull::v1::XmlSerializer > attribute(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xmlpull::v1::XmlSerializer > endTag(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::xmlpull::v1::XmlSerializer > text(local_ref< java::lang::String >  const&);
		local_ref< org::xmlpull::v1::XmlSerializer > text(local_ref< array<jchar,1> >  const&, jint, jint);
		void cdsect(local_ref< java::lang::String >  const&);
		void entityRef(local_ref< java::lang::String >  const&);
		void processingInstruction(local_ref< java::lang::String >  const&);
		void comment(local_ref< java::lang::String >  const&);
		void docdecl(local_ref< java::lang::String >  const&);
		void ignorableWhitespace(local_ref< java::lang::String >  const&);
		void flush();
	}; //class XmlSerializer

} //namespace v1
} //namespace xmlpull
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLSERIALIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLSERIALIZER_HPP_IMPL
#define J2CPP_ORG_XMLPULL_V1_XMLSERIALIZER_HPP_IMPL

namespace j2cpp {



org::xmlpull::v1::XmlSerializer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::xmlpull::v1::XmlSerializer::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(0),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::xmlpull::v1::XmlSerializer::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(1),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(2),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > org::xmlpull::v1::XmlSerializer::getProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(3),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::setOutput(local_ref< java::io::OutputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(4),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void org::xmlpull::v1::XmlSerializer::setOutput(local_ref< java::io::Writer > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(5),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::startDocument(local_ref< java::lang::String > const &a0, local_ref< java::lang::Boolean > const &a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(6),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

void org::xmlpull::v1::XmlSerializer::endDocument()
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(7),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

void org::xmlpull::v1::XmlSerializer::setPrefix(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(8),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlSerializer::getPrefix(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(9),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

jint org::xmlpull::v1::XmlSerializer::getDepth()
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(10),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > org::xmlpull::v1::XmlSerializer::getNamespace()
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(11),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::xmlpull::v1::XmlSerializer::getName()
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(12),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlSerializer::startTag(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(13),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::xmlpull::v1::XmlSerializer >
	>(get_jobject(), a0, a1);
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlSerializer::attribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(14),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< org::xmlpull::v1::XmlSerializer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlSerializer::endTag(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(15),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< org::xmlpull::v1::XmlSerializer >
	>(get_jobject(), a0, a1);
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlSerializer::text(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(16),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< org::xmlpull::v1::XmlSerializer >
	>(get_jobject(), a0);
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlSerializer::text(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(17),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< org::xmlpull::v1::XmlSerializer >
	>(get_jobject(), a0, a1, a2);
}

void org::xmlpull::v1::XmlSerializer::cdsect(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(18),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::entityRef(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(19),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::processingInstruction(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(20),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::comment(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(21),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::docdecl(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(22),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::ignorableWhitespace(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(23),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}

void org::xmlpull::v1::XmlSerializer::flush()
{
	return call_method<
		org::xmlpull::v1::XmlSerializer::J2CPP_CLASS_NAME,
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_NAME(24),
		org::xmlpull::v1::XmlSerializer::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::xmlpull::v1::XmlSerializer,"org/xmlpull/v1/XmlSerializer")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,0,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,1,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,2,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,3,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,4,"setOutput","(Ljava/io/OutputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,5,"setOutput","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,6,"startDocument","(Ljava/lang/String;Ljava/lang/Boolean;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,7,"endDocument","()V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,8,"setPrefix","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,9,"getPrefix","(Ljava/lang/String;Z)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,10,"getDepth","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,11,"getNamespace","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,12,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,13,"startTag","(Ljava/lang/String;Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,14,"attribute","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,15,"endTag","(Ljava/lang/String;Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,16,"text","(Ljava/lang/String;)Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,17,"text","([CII)Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,18,"cdsect","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,19,"entityRef","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,20,"processingInstruction","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,21,"comment","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,22,"docdecl","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,23,"ignorableWhitespace","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlSerializer,24,"flush","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLSERIALIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
