/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.SecureRandom
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SECURERANDOM_HPP_DECL
#define J2CPP_JAVA_SECURITY_SECURERANDOM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace util { class Random; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/util/Random.hpp>


namespace j2cpp {

namespace java { namespace security {

	class SecureRandom;
	class SecureRandom
		: public object<SecureRandom>
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

		explicit SecureRandom(jobject jobj)
		: object<SecureRandom>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Random>() const;


		SecureRandom();
		SecureRandom(local_ref< array<jbyte,1> > const&);
		static local_ref< java::security::SecureRandom > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::SecureRandom > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::SecureRandom > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getAlgorithm();
		void setSeed(local_ref< array<jbyte,1> >  const&);
		void setSeed(jlong);
		void nextBytes(local_ref< array<jbyte,1> >  const&);
		static local_ref< array<jbyte,1> > getSeed(jint);
		local_ref< array<jbyte,1> > generateSeed(jint);
	}; //class SecureRandom

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SECURERANDOM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SECURERANDOM_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SECURERANDOM_HPP_IMPL

namespace j2cpp {



java::security::SecureRandom::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::security::SecureRandom::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::SecureRandom::operator local_ref<java::util::Random>() const
{
	return local_ref<java::util::Random>(get_jobject());
}


java::security::SecureRandom::SecureRandom()
: object<java::security::SecureRandom>(
	call_new_object<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(0),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::security::SecureRandom::SecureRandom(local_ref< array<jbyte,1> > const &a0)
: object<java::security::SecureRandom>(
	call_new_object<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(1),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



local_ref< java::security::SecureRandom > java::security::SecureRandom::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(3),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::SecureRandom >
	>(a0);
}

local_ref< java::security::SecureRandom > java::security::SecureRandom::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(4),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::SecureRandom >
	>(a0, a1);
}

local_ref< java::security::SecureRandom > java::security::SecureRandom::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(5),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::SecureRandom >
	>(a0, a1);
}

local_ref< java::security::Provider > java::security::SecureRandom::getProvider()
{
	return call_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(6),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::security::Provider >
	>(get_jobject());
}

local_ref< java::lang::String > java::security::SecureRandom::getAlgorithm()
{
	return call_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(7),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::security::SecureRandom::setSeed(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(8),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void java::security::SecureRandom::setSeed(jlong a0)
{
	return call_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(9),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void java::security::SecureRandom::nextBytes(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(10),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}


local_ref< array<jbyte,1> > java::security::SecureRandom::getSeed(jint a0)
{
	return call_static_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(12),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< array<jbyte,1> >
	>(a0);
}

local_ref< array<jbyte,1> > java::security::SecureRandom::generateSeed(jint a0)
{
	return call_method<
		java::security::SecureRandom::J2CPP_CLASS_NAME,
		java::security::SecureRandom::J2CPP_METHOD_NAME(13),
		java::security::SecureRandom::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array<jbyte,1> >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::security::SecureRandom,"java/security/SecureRandom")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,1,"<init>","([B)V")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,2,"<init>","(Ljava/security/SecureRandomSpi;Ljava/security/Provider;)V")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,3,"getInstance","(Ljava/lang/String;)Ljava/security/SecureRandom;")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,4,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,5,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,6,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,7,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,8,"setSeed","([B)V")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,9,"setSeed","(J)V")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,10,"nextBytes","([B)V")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,11,"next","(I)I")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,12,"getSeed","(I)[B")
J2CPP_DEFINE_METHOD(java::security::SecureRandom,13,"generateSeed","(I)[B")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SECURERANDOM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
