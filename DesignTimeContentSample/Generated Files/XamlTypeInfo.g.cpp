﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "MainPage.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "App.g.hpp"
#include "MainPage.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Thumbnail(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Thumbnail;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Order(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Order;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Name(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Name;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Dinosaurs(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Dinosaurs;
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Thumbnail(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Thumbnail = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Order(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Order = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Name(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Name = safe_cast<TValue^>(value);
}

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    bool    isLocalType;
    bool    isSystemType;
    bool    isReturnTypeStub;
    bool    isBindable;
};

TypeInfo TypeInfos[] = 
{
    //   0
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   1
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   2
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   3
    L"DesignTimeContentSample.MainPage", L"",
    &ActivateType<::DesignTimeContentSample::MainPage>, nullptr, nullptr, nullptr,
    2, // Windows.UI.Xaml.Controls.Page
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   4
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   5
    L"DesignTimeContentSample.Models.Dinosaur", L"",
    &ActivateType<::DesignTimeContentSample::Models::Dinosaur>, nullptr, nullptr, nullptr,
    0, // Object
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //   6
    L"DesignTimeContentSample.Repository.SampleDinosaurData", L"",
    &ActivateType<::DesignTimeContentSample::Repository::SampleDinosaurData>, nullptr, nullptr, nullptr,
    0, // Object
    3, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //   7
    L"Windows.Foundation.Collections.IObservableVector`1<DesignTimeContentSample.Models.Dinosaur>", L"",
    nullptr, &CollectionAdd<::Windows::Foundation::Collections::IObservableVector<::DesignTimeContentSample::Models::Dinosaur^>, ::DesignTimeContentSample::Models::Dinosaur^>, nullptr, nullptr,
    -1,
    4, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, false, true,  false,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    4, 0,::Windows::UI::Xaml::Interop::TypeKind::Custom,
    false, false, false, false,
};

UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      2,   //   7
      2,   //   8
      2,   //   9
      2,   //  10
      2,   //  11
      2,   //  12
      2,   //  13
      2,   //  14
      2,   //  15
      2,   //  16
      2,   //  17
      2,   //  18
      2,   //  19
      2,   //  20
      2,   //  21
      2,   //  22
      2,   //  23
      2,   //  24
      2,   //  25
      2,   //  26
      2,   //  27
      2,   //  28
      2,   //  29
      3,   //  30
      3,   //  31
      3,   //  32
      4,   //  33
      4,   //  34
      4,   //  35
      4,   //  36
      5,   //  37
      5,   //  38
      5,   //  39
      6,   //  40
      6,   //  41
      6,   //  42
      6,   //  43
      6,   //  44
      6,   //  45
      6,   //  46
      6,   //  47
      6,   //  48
      6,   //  49
      6,   //  50
      6,   //  51
      6,   //  52
      6,   //  53
      7,   //  54
      7,   //  55
      7,   //  56
      7,   //  57
      7,   //  58
      7,   //  59
      7,   //  60
      7,   //  61
      7,   //  62
      7,   //  63
      7,   //  64
      7,   //  65
      7,   //  66
      7,   //  67
      7,   //  68
      7,   //  69
      7,   //  70
      7,   //  71
      7,   //  72
      7,   //  73
      7,   //  74
      7,   //  75
      7,   //  76
      7,   //  77
      7,   //  78
      7,   //  79
      7,   //  80
      7,   //  81
      7,   //  82
      7,   //  83
      7,   //  84
      7,   //  85
      7,   //  86
      7,   //  87
      7,   //  88
      7,   //  89
      7,   //  90
      7,   //  91
      8,   //  92
};

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

MemberInfo MemberInfos[] = 
{
    //   0 - DesignTimeContentSample.Models.Dinosaur.Thumbnail
    L"Thumbnail",
    &GetReferenceTypeMember_Thumbnail<::DesignTimeContentSample::Models::Dinosaur>,
    &SetReferenceTypeMember_Thumbnail<::DesignTimeContentSample::Models::Dinosaur, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   1 - DesignTimeContentSample.Models.Dinosaur.Order
    L"Order",
    &GetReferenceTypeMember_Order<::DesignTimeContentSample::Models::Dinosaur>,
    &SetReferenceTypeMember_Order<::DesignTimeContentSample::Models::Dinosaur, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   2 - DesignTimeContentSample.Models.Dinosaur.Name
    L"Name",
    &GetReferenceTypeMember_Name<::DesignTimeContentSample::Models::Dinosaur>,
    &SetReferenceTypeMember_Name<::DesignTimeContentSample::Models::Dinosaur, ::Platform::String>,
    1, // String
    -1,
    false, false, false,
    //   3 - DesignTimeContentSample.Repository.SampleDinosaurData.Dinosaurs
    L"Dinosaurs",
    &GetReferenceTypeMember_Dinosaurs<::DesignTimeContentSample::Repository::SampleDinosaurData>,
    nullptr,
    7, // Windows.Foundation.Collections.IObservableVector`1<DesignTimeContentSample.Models.Dinosaur>
    -1,
    true,  false, false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}

TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    int typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    for (int lastDotIndex = longMemberName->Length(); lastDotIndex >= 0; lastDotIndex--)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
    }
    return nullptr;
}

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->isSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->isLocalType;
        userType->IsReturnTypeStub = pTypeInfo->isReturnTypeStub;
        userType->IsBindable = pTypeInfo->isBindable;
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}

