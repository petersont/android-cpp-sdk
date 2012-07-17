/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Comment
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_COMMENT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_COMMENT_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class CharacterData; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/CharacterData.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Comment;
	class Comment
		: public object<Comment>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit Comment(jobject jobj)
		: object<Comment>(jobj)
		{
		}

		operator local_ref<org::w3c::dom::Node>() const;
		operator local_ref<org::w3c::dom::CharacterData>() const;
		operator local_ref<java::lang::Object>() const;

	}; //class Comment

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_COMMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_COMMENT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_COMMENT_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Comment::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

org::w3c::dom::Comment::operator local_ref<org::w3c::dom::CharacterData>() const
{
	return local_ref<org::w3c::dom::CharacterData>(get_jobject());
}

org::w3c::dom::Comment::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(org::w3c::dom::Comment,"org/w3c/dom/Comment")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_COMMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
