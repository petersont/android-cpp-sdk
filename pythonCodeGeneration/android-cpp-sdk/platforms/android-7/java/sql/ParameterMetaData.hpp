/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.ParameterMetaData
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_PARAMETERMETADATA_HPP_DECL
#define J2CPP_JAVA_SQL_PARAMETERMETADATA_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class ParameterMetaData;
	class ParameterMetaData
		: public object<ParameterMetaData>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit ParameterMetaData(jobject jobj)
		: object<ParameterMetaData>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getParameterClassName(jint);
		jint getParameterCount();
		jint getParameterMode(jint);
		jint getParameterType(jint);
		local_ref< java::lang::String > getParameterTypeName(jint);
		jint getPrecision(jint);
		jint getScale(jint);
		jint isNullable(jint);
		jboolean isSigned(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > parameterModeIn;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > parameterModeInOut;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > parameterModeOut;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > parameterModeUnknown;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > parameterNoNulls;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > parameterNullable;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > parameterNullableUnknown;
	}; //class ParameterMetaData

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_PARAMETERMETADATA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_PARAMETERMETADATA_HPP_IMPL
#define J2CPP_JAVA_SQL_PARAMETERMETADATA_HPP_IMPL

namespace j2cpp {



java::sql::ParameterMetaData::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > java::sql::ParameterMetaData::getParameterClassName(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(0),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jint java::sql::ParameterMetaData::getParameterCount()
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(1),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

jint java::sql::ParameterMetaData::getParameterMode(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(2),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0);
}

jint java::sql::ParameterMetaData::getParameterType(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(3),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::sql::ParameterMetaData::getParameterTypeName(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(4),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jint java::sql::ParameterMetaData::getPrecision(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(5),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

jint java::sql::ParameterMetaData::getScale(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(6),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0);
}

jint java::sql::ParameterMetaData::isNullable(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(7),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

jboolean java::sql::ParameterMetaData::isSigned(jint a0)
{
	return call_method<
		java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
		java::sql::ParameterMetaData::J2CPP_METHOD_NAME(8),
		java::sql::ParameterMetaData::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}


static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(0),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::sql::ParameterMetaData::parameterModeIn;

static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(1),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::sql::ParameterMetaData::parameterModeInOut;

static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(2),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::sql::ParameterMetaData::parameterModeOut;

static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(3),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(3),
	jint
> java::sql::ParameterMetaData::parameterModeUnknown;

static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(4),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(4),
	jint
> java::sql::ParameterMetaData::parameterNoNulls;

static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(5),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(5),
	jint
> java::sql::ParameterMetaData::parameterNullable;

static_field<
	java::sql::ParameterMetaData::J2CPP_CLASS_NAME,
	java::sql::ParameterMetaData::J2CPP_FIELD_NAME(6),
	java::sql::ParameterMetaData::J2CPP_FIELD_SIGNATURE(6),
	jint
> java::sql::ParameterMetaData::parameterNullableUnknown;


J2CPP_DEFINE_CLASS(java::sql::ParameterMetaData,"java/sql/ParameterMetaData")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,0,"getParameterClassName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,1,"getParameterCount","()I")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,2,"getParameterMode","(I)I")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,3,"getParameterType","(I)I")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,4,"getParameterTypeName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,5,"getPrecision","(I)I")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,6,"getScale","(I)I")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,7,"isNullable","(I)I")
J2CPP_DEFINE_METHOD(java::sql::ParameterMetaData,8,"isSigned","(I)Z")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,0,"parameterModeIn","I")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,1,"parameterModeInOut","I")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,2,"parameterModeOut","I")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,3,"parameterModeUnknown","I")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,4,"parameterNoNulls","I")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,5,"parameterNullable","I")
J2CPP_DEFINE_FIELD(java::sql::ParameterMetaData,6,"parameterNullableUnknown","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_PARAMETERMETADATA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
