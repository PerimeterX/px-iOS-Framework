#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef PERIMETERX_SDK_SWIFT_H
#define PERIMETERX_SDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PerimeterX_SDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)




enum PXPolicyUrlRequestInterceptionType : NSInteger;
@class NSString;

/// The policy that define the behaviour of the SDK.
SWIFT_CLASS("_TtC14PerimeterX_SDK8PXPolicy")
@interface PXPolicy : NSObject <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
/// Decide how the SDK should handle URL requests. Default is <code>PXPolicyUrlRequestInterceptionType/intercept</code>.
@property (nonatomic) enum PXPolicyUrlRequestInterceptionType urlRequestInterceptionType;
/// This property is relevant only for apps that use <code>WKWebView</code> to load their website (which also protected by PerimeterX). By setting this property to <code>true</code>, the SDK syncs both the native and the web sessions to ensure flawless experience. Default is <code>false</code>. You must set your domains with the <code>PXPolicy/set(domains:forAppId:)</code> function to ensure the hybrid app support is working as expected.
@property (nonatomic) BOOL hybridAppSupportEnabled;
/// Use this function to register domains which your app interact with. The SDK (when the <code>PXPolicy/urlRequestInterceptionType</code> is set to any value rather than <code>PXPolicyUrlRequestInterceptionType/none</code>) is intercepting URL requests to those domains only. If you do not set domain, the SDK will intercept all URL requests. In addition, the SDK (when <code>PXPolicy/hybridAppSupportEnabled</code> is set to <code>true</code>) is setting cookies in your web views in order to sync between the native and the web sessions. However, the SDK will set cookies only for domains that are set in this property. Therefore, you must set your domains to enable hybrid app support. Example: for the website <code>www.google.com</code> you should set the domain: <code>google.com</code>.
/// \param domains List if your domains.
///
/// \param appId The AppID of your account.
///
- (void)setWithDomains:(NSSet<NSString *> * _Nonnull)domains forAppId:(NSString * _Nonnull)appId;
/// Allow the SDK to intercept touches on the screen. Default is <code>true</code>.
@property (nonatomic) BOOL allowTouchDetection;
/// Allow the SDK to collect device motion data. This feature is disabled when <code>allowTouchDetection</code> is <code>false</code>. The SDK is creating an instance of <code>CMMotionManager</code> to monitor device’s motion. However, it’s not recommended to have more than one instance in the app. By setting this property to <code>false</code>, the SDK won’t create an instance of <code>CMMotionManager</code>. Default is <code>true</code>.
@property (nonatomic) BOOL allowDeviceMotionDetection;
/// Allow the SDK to evaluate JavaScript code in your web views (for hybrid app support). You should disable JavaScript code when using ApplePay in your web view. When you disable JavaScript evaluation, the SDK could store cookies instead (depending on the run time environment). Default is <code>true</code>.
@property (nonatomic) BOOL allowJavaScriptEvaluation;
/// Set this property to <code>true</code> to enable the <code>Doctor App</code> - a tool to verify the integration of the SDK in your app. Make sure to set this property to <code>false</code> before deploying you app to production. Default is <code>false</code>.
@property (nonatomic) BOOL doctorCheckEnabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// The URL request interception type.
typedef SWIFT_ENUM(NSInteger, PXPolicyUrlRequestInterceptionType, open) {
/// The SDK does not intercept URL requests at all.
  PXPolicyUrlRequestInterceptionTypeNone = 0,
/// The SDK intercepts URL requests in order to add HTTP headers and handle block responses.
/// The SDK can intercept those types of requests:
/// <ol>
///   <li>
///     URLSession.
///   </li>
///   <li>
///     WKWebView.
///   </li>
///   <li>
///     Any 3rd party library which based on URLSession (like Alamofire).
///     Notice that the SDK cannot intercept requests from SFSafariViewController.
///   </li>
/// </ol>
  PXPolicyUrlRequestInterceptionTypeIntercept = 1,
/// Same as <code>PXPolicyUrlRequestInterceptionType/intercept</code>. The SDK delays the error response to your app until the user solve or cancel the challenge.
  PXPolicyUrlRequestInterceptionTypeInterceptWithDelayedResponse = 2,
/// Same as <code>PXPolicyUrlRequestInterceptionType/interceptWithDelayedResponse</code>. When the user solves the challenge, the SDK will send the original request again.
  PXPolicyUrlRequestInterceptionTypeInterceptAndRetryRequest = 3,
};

@protocol PerimeterXDelegate;
@class NSURLResponse;
@class NSData;
enum PerimeterXChallengeResult : NSInteger;

/// PerimeterX main class. You should interact with it in order to setup and start the SDK.
SWIFT_CLASS("_TtC14PerimeterX_SDK10PerimeterX")
@interface PerimeterX : NSObject
/// Start the SDK.
/// Call this function to start th SDK with a single AppID. You should call this function only once. You should call this function only from the main thread. This function may throw an error.
/// \param appId The AppID of your account.
///
/// \param delegate A delegate object that conform to <code>PerimeterXDelegate</code> protocol.
///
/// \param policy The policy object that config the SDK.
///
+ (BOOL)startWithAppId:(NSString * _Nonnull)appId delegate:(id <PerimeterXDelegate> _Nullable)delegate policy:(PXPolicy * _Nonnull)policy error:(NSError * _Nullable * _Nullable)error;
/// Start the SDK.
/// Call this function to start th SDK with multiple AppIDs. You should call this function only once. You should call this function only from the main thread. This function may throw an error.
/// \param appIds The list of AppIDs for your account.
///
/// \param delegate A delegate object that conform to <code>PerimeterXDelegate</code> protocol.
///
/// \param policy The policy object that config the SDK.
///
+ (BOOL)startWithAppIds:(NSArray<NSString *> * _Nonnull)appIds delegate:(id <PerimeterXDelegate> _Nullable)delegate policy:(PXPolicy * _Nonnull)policy error:(NSError * _Nullable * _Nullable)error;
/// Get the VID for given AppID.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (NSString * _Nullable)vidForAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// Returns HTTP headers that should be added to the URL request.
/// This function should be used only when the <code>PXPolicy/urlRequestInterceptionType</code> is set to <code>PXPolicyUrlRequestInterceptionType/none</code>.
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (NSDictionary<NSString *, NSString *> * _Nullable)headersForURLRequestForAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// This function checks if the SDK can handle the URL request’s response and presents the block screen.
/// Returns <code>true</code> if the PerimeterX’s payload in the response can be handled by the SDK. This function does not present the block screen.
/// \param response The response that was received from the URL request.
///
/// \param data The data that was received from the URL request.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (BOOL)canHandleResponseWithResponse:(NSURLResponse * _Nonnull)response data:(NSData * _Nonnull)data forAppId:(NSString * _Nullable)appId SWIFT_WARN_UNUSED_RESULT;
/// This function handles the URL request’s response and presents the block screen, if necessary.
/// Returns <code>true</code> if the PerimeterX’s payload in the response was handled by the SDK. This function should be used only when the <code>PXPolicyUrlRequestInterceptionType</code> is set to <code>PXPolicyUrlRequestInterceptionType/none</code> in the policy.
/// \param response The response that was received from the URL request.
///
/// \param data The data that was received from the URL request.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
/// \param callback The callback that indicate the challenge’s result. The callback will be called once the user solved (or cancelled)  the challenge. You may use this to retry the URL request.
///
+ (BOOL)handleResponseWithResponse:(NSURLResponse * _Nonnull)response data:(NSData * _Nonnull)data forAppId:(NSString * _Nullable)appId callback:(void (^ _Nullable)(enum PerimeterXChallengeResult))callback SWIFT_WARN_UNUSED_RESULT;
/// Set custom parameters for given AppID.
/// You must call the <code>start(appId:delegate:policy:)</code> function before calling this function, otherwise it will throw an error.
/// \param parameters Custom parameters. Each key must be in the following format: “custom_param[x]” where [x] is a number between 1-10.
///
/// \param appId The AppID to associate the custom parameters with. Ignore this param if you use only one AppID.
///
+ (BOOL)setCustomParametersWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters forAppId:(NSString * _Nullable)appId error:(NSError * _Nullable * _Nullable)error;
/// Returns <code>true</code> if the error is <code>PerimeterXErrorCode/requestWasBlocked</code> error.
/// This kind error should returned when the <code>PXPolicyUrlRequestInterceptionType</code> is set to any value rather than <code>PXPolicyUrlRequestInterceptionType/none</code>.
/// \param error The error to check
///
+ (BOOL)isRequestBlockedErrorWithError:(NSError * _Nonnull)error SWIFT_WARN_UNUSED_RESULT;
/// Returns <code>true</code> if the error is <code>PerimeterXErrorCode/challengeSolved</code> error.
/// This kind error should returned when the <code>PXPolicyUrlRequestInterceptionType</code> is set to any value rather than <code>PXPolicyUrlRequestInterceptionType/none</code>.
/// \param error The error to check
///
+ (BOOL)isChallengeSolvedErrorWithError:(NSError * _Nonnull)error SWIFT_WARN_UNUSED_RESULT;
/// Returns <code>true</code> if the error is <code>PerimeterXErrorCode/challengeCancelled</code> error.
/// This kind error should returned when the <code>PXPolicyUrlRequestInterceptionType</code> is set to any value rather than <code>PXPolicyUrlRequestInterceptionType/none</code>.
/// \param error The error to check
///
+ (BOOL)isChallengeCancelledErrorWithError:(NSError * _Nonnull)error SWIFT_WARN_UNUSED_RESULT;
/// Calling this method with non-<code>null</code> <code>userId</code> will start the Account Defender feature.
/// You must call the <code>start(appId:delegate:policy:)</code> function before calling this function.
/// \param userId The user ID. You may provide nil in case the user is not logged in anymore.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (BOOL)setUserIdWithUserId:(NSString * _Nullable)userId forAppId:(NSString * _Nullable)appId error:(NSError * _Nullable * _Nullable)error;
/// Provide outgoing URL request to the Account Defender feature.
/// You must call the <code>setUserId(userId:forAppId:)</code> function before calling this function. If the <code>PXPolicyUrlRequestInterceptionType</code> is set to any value rather than <code>PXPolicyUrlRequestInterceptionType/none</code>, you should not need to use this function (it will be called automatically by the SDK).
/// \param url The URL.
///
/// \param appId The AppID of your account. Ignore this param if you use only one AppID.
///
+ (BOOL)registerOutgoingUrlRequestWithUrl:(NSString * _Nonnull)url forAppId:(NSString * _Nullable)appId error:(NSError * _Nullable * _Nullable)error;
/// Set additional data that support Account Defender for given AppID.
/// You must call the <code>start(appId:delegate:policy:)</code> function before calling this function.
/// \param parameters Custom parameters.
///
/// \param appId The AppID to associate the custom parameters with. Ignore this param if you use only one AppID.
///
+ (BOOL)setAdditionalDataWithParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)parameters forAppId:(NSString * _Nullable)appId error:(NSError * _Nullable * _Nullable)error;
/// Returns the PerimeterX SDK version.
+ (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Challenge result.
typedef SWIFT_ENUM(NSInteger, PerimeterXChallengeResult, open) {
/// Challenge was solved.
  PerimeterXChallengeResultSolved = 0,
/// Challenge was cancelled.
  PerimeterXChallengeResultCancelled = 1,
};

@class NSURL;

/// PerimeterX protocol
SWIFT_PROTOCOL("_TtP14PerimeterX_SDK18PerimeterXDelegate_")
@protocol PerimeterXDelegate <NSObject>
@optional
/// Called when a request was blocked.
/// \param appId The AppID that related to the event.
///
/// \param url The request’s URL that was blocked. Will be <code>nil</code> when <code>PXPolicy/urlRequestInterceptionType</code> is set to <code>PXPolicyUrlRequestInterceptionType/none</code> in the policy.
///
- (void)perimeterxDidRequestBlockedWithUrl:(NSURL * _Nullable)url appId:(NSString * _Nonnull)appId;
/// Called when the challenge was solved.
/// \param appId The AppID that related to the event.
///
- (void)perimeterxDidChallengeSolvedForAppId:(NSString * _Nonnull)appId;
/// Called when the challenge was cancelled.
/// \param appId The AppID that related to the event.
///
- (void)perimeterxDidChallengeCancelledForAppId:(NSString * _Nonnull)appId;
/// Called when the HTTP headers were changed. You may store and use those headers instead of calling the <code>PerimeterX/headersForURLRequest(forAppId:)</code> function for every URL request.
/// \param headers HTTP headers.
///
/// \param appId The AppID that related to the event.
///
- (void)perimeterxHeadersWereUpdatedWithHeaders:(NSDictionary<NSString *, NSString *> * _Nonnull)headers forAppId:(NSString * _Nonnull)appId;
@end

/// SDK’s error codes. This will be included in errors objects that generated by the SDK.
typedef SWIFT_ENUM(NSInteger, PerimeterXErrorCode, open) {
/// <code>PerimeterX/start(appId:delegate:policy:)</code> or <code>PerimeterX/start(appIds:delegate:policy:)</code> functions were called without any AppID.
  PerimeterXErrorCodeMissingAppId = 0,
/// <code>PerimeterX/start(appId:delegate:policy:)</code> or <code>PerimeterX/start(appIds:delegate:policy:)</code> functions were called with invalid AppID.
  PerimeterXErrorCodeInvalidAppId = 1,
/// <code>PerimeterX/start(appId:delegate:policy:)</code> or <code>PerimeterX/start(appIds:delegate:policy:)</code> functions were called not on the main thread.
  PerimeterXErrorCodeStartNotCalledOnMainThread = 2,
/// <code>PerimeterX/start(appId:delegate:policy:)</code> or <code>PerimeterX/start(appIds:delegate:policy:)</code> functions were called more than once.
  PerimeterXErrorCodeStartCalledMoreThanOnce = 3,
/// The SDK failed to generate token. Make sure the AppID is set correctly.
  PerimeterXErrorCodeTokenWasNotGenerated = 4,
/// The SDK failed to perform the operation. Make sure to call the <code>PerimeterX/start(appId:delegate:policy:)</code> function.
  PerimeterXErrorCodeStartWasNotCalled = 5,
/// Internal error in the SDK.
  PerimeterXErrorCodeInternalError = 6,
/// URL request was blocked by PerimeterX.
  PerimeterXErrorCodeRequestWasBlocked = 7,
/// Challenge was solved by the user.
  PerimeterXErrorCodeChallengeSolved = 8,
/// Challenge was cancelled.
  PerimeterXErrorCodeChallengeCancelled = 9,
};













#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
