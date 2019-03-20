#import <Foundation/Foundation.h>

@class CommonBasePresenter, CommonKotlinThrowable, CommonMovieListPresenter, CommonSearchViewModel, CommonMovieViewModel, CommonMovieViewModelCompanion, CommonMovieResponse, CommonSearchViewModelCompanion, CommonSearchResultResponse, CommonMovieBrowserRepositoryImpl, CommonMovieApiService, CommonRatingsResponse, CommonMovieResponseCompanion, CommonMovieResponse$serializer, CommonRatingsResponseCompanion, CommonRatingsResponse$serializer, CommonSearchResultResponseCompanion, CommonSearchResultResponse$serializer, CommonKtor_client_core_iosHttpClient, CommonMovieBrowserApiAdapter, CommonKotlinUnit, CommonKtor_utils_iosAttributeKey, CommonBadRequest, CommonKotlinArray, CommonKotlinx_serialization_runtime_nativeEnumDescriptor, CommonKotlinx_serialization_runtime_nativeSerialKind, CommonKotlinNothing, CommonKotlinx_serialization_runtime_nativeUpdateMode, CommonKtor_client_core_iosHttpClientConfig, CommonKotlinx_coroutines_core_nativeCoroutineDispatcher, CommonKtor_client_core_iosHttpClientEngineConfig, CommonKtor_client_core_iosHttpReceivePipeline, CommonKtor_client_core_iosHttpRequestPipeline, CommonKtor_client_core_iosHttpResponsePipeline, CommonKtor_client_core_iosHttpSendPipeline, CommonKtor_client_core_iosHttpClientCall, CommonKtor_utils_iosGMTDate, CommonKtor_http_iosHttpStatusCode, CommonKtor_http_iosHttpProtocolVersion, CommonKotlinx_serialization_runtime_nativeSerialClassDescImpl, CommonKotlinEnum, CommonKotlinAbstractCoroutineContextElement, CommonKtor_client_core_iosHttpResponseConfig, CommonKtor_utils_iosPipeline, CommonKtor_utils_iosPipelinePhase, CommonKotlinx_io_nativeByteOrder, CommonKotlinx_coroutines_core_nativeCancellationException, CommonKtor_utils_iosWeekDay, CommonKtor_utils_iosMonth, CommonKotlinx_io_nativeCharset, CommonKtor_http_iosOutgoingContent, CommonKtor_http_iosHttpMethod, CommonKtor_http_iosUrl, CommonKotlinx_io_nativeIoBuffer, CommonKotlinIllegalStateException, CommonKotlinRuntimeException, CommonKotlinException, CommonKotlinx_io_nativeCharsetDecoder, CommonKotlinx_io_nativeCharsetEncoder, CommonKtor_http_iosContentType, CommonKtor_http_iosURLProtocol, CommonKotlinByteArray, CommonKotlinDoubleArray, CommonKotlinFloatArray, CommonKotlinIntArray, CommonKotlinLongArray, CommonKotlinShortArray, CommonKotlinCharArray, CommonKotlinx_coroutines_core_nativeAtomicDesc, CommonKtor_http_iosHeaderValueWithParameters, CommonKtor_http_iosHeaderValueParam, CommonKotlinByteIterator, CommonKotlinDoubleIterator, CommonKotlinFloatIterator, CommonKotlinIntIterator, CommonKotlinLongIterator, CommonKotlinShortIterator, CommonKotlinCharIterator, CommonKotlinx_coroutines_core_nativeAtomicOp, CommonKotlinx_coroutines_core_nativeOpDescriptor;

@protocol CommonKotlinx_coroutines_core_nativeCoroutineScope, CommonKotlinCoroutineContext, CommonBaseView, CommonMovieListView, CommonMovieBrowserRepository, CommonKotlinx_serialization_runtime_nativeKSerializer, CommonKotlinx_serialization_runtime_nativeSerializationStrategy, CommonKotlinx_serialization_runtime_nativeEncoder, CommonKotlinx_serialization_runtime_nativeSerialDescriptor, CommonKotlinx_serialization_runtime_nativeDeserializationStrategy, CommonKotlinx_serialization_runtime_nativeDecoder, CommonKtor_client_core_iosHttpClientFeature, CommonKtor_client_core_iosHttpResponse, CommonKotlinCoroutineContextElement, CommonKotlinCoroutineContextKey, CommonKotlinx_serialization_runtime_nativeCompositeEncoder, CommonKotlinx_serialization_runtime_nativeSerialContext, CommonKotlinAnnotation, CommonKotlinx_serialization_runtime_nativeCompositeDecoder, CommonKotlinx_io_nativeCloseable, CommonKtor_client_core_iosHttpClientEngine, CommonKtor_utils_iosAttributes, CommonKotlinIterator, CommonKotlinx_coroutines_io_nativeByteReadChannel, CommonKotlinx_coroutines_core_nativeJob, CommonKtor_http_iosHttpMessage, CommonKtor_http_iosHeaders, CommonKotlinx_serialization_runtime_nativeGeneratedSerializer, CommonKotlinKClass, CommonKotlinComparable, CommonKotlinContinuationInterceptor, CommonKotlinContinuation, CommonKotlinx_coroutines_core_nativeRunnable, CommonKotlinSuspendFunction2, CommonKtor_client_core_iosHttpRequest, CommonKotlinx_coroutines_io_nativeReadSession, CommonKotlinx_coroutines_core_nativeChildHandle, CommonKotlinx_coroutines_core_nativeChildJob, CommonKotlinx_coroutines_core_nativeDisposableHandle, CommonKotlinSequence, CommonKotlinx_coroutines_core_nativeSelectClause0, CommonKtor_utils_iosStringValues, CommonKotlinMapEntry, CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier, CommonKotlinSuspendFunction, CommonKotlinx_coroutines_core_nativeParentJob, CommonKotlinx_coroutines_core_nativeSelectInstance, CommonKotlinSuspendFunction0, CommonKtor_http_iosParameters, CommonKotlinx_io_nativeInput, CommonKotlinx_io_nativeOutput, CommonKotlinAppendable, CommonKotlinx_io_nativeObjectPool;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface CommonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface CommonNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface CommonByte : CommonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface CommonUByte : CommonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface CommonShort : CommonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface CommonUShort : CommonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface CommonInt : CommonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface CommonUInt : CommonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface CommonLong : CommonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface CommonULong : CommonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface CommonFloat : CommonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface CommonDouble : CommonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface CommonBoolean : CommonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineScope")))
@protocol CommonKotlinx_coroutines_core_nativeCoroutineScope
@required
@property (readonly) id<CommonKotlinCoroutineContext> coroutineContext;
@end;

__attribute__((swift_name("BasePresenter")))
@interface CommonBasePresenter : KotlinBase <CommonKotlinx_coroutines_core_nativeCoroutineScope>
- (instancetype)initWithMainContext:(id<CommonKotlinCoroutineContext>)mainContext baseView:(id<CommonBaseView>)baseView __attribute__((swift_name("init(mainContext:baseView:)"))) __attribute__((objc_designated_initializer));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@end;

__attribute__((swift_name("BaseView")))
@protocol CommonBaseView
@required
- (void)showProgressIndicatorShow:(BOOL)show __attribute__((swift_name("showProgressIndicator(show:)")));
- (void)showErrorError:(CommonKotlinThrowable *)error __attribute__((swift_name("showError(error:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieListPresenter")))
@interface CommonMovieListPresenter : CommonBasePresenter
- (instancetype)initWithUiContext:(id<CommonKotlinCoroutineContext>)uiContext view:(id<CommonMovieListView>)view repository:(id<CommonMovieBrowserRepository>)repository __attribute__((swift_name("init(uiContext:view:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMainContext:(id<CommonKotlinCoroutineContext>)mainContext baseView:(id<CommonBaseView>)baseView __attribute__((swift_name("init(mainContext:baseView:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)getMovieListTitle:(NSString *)title __attribute__((swift_name("getMovieList(title:)")));
@end;

__attribute__((swift_name("MovieListView")))
@protocol CommonMovieListView <CommonBaseView>
@required
- (void)getMovieSuccsessSearchViewModel:(CommonSearchViewModel *)searchViewModel __attribute__((swift_name("getMovieSuccsess(searchViewModel:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieViewModel")))
@interface CommonMovieViewModel : KotlinBase
- (instancetype)initWithTitle:(NSString *)title year:(NSString *)year type:(NSString *)type imgUrl:(NSString *)imgUrl __attribute__((swift_name("init(title:year:type:imgUrl:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, NSString *> *)parseForFlutter __attribute__((swift_name("parseForFlutter()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CommonMovieViewModel *)doCopyTitle:(NSString *)title year:(NSString *)year type:(NSString *)type imgUrl:(NSString *)imgUrl __attribute__((swift_name("doCopy(title:year:type:imgUrl:)")));
@property (readonly) NSString *title;
@property (readonly) NSString *year;
@property (readonly) NSString *type;
@property (readonly) NSString *imgUrl;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieViewModel.Companion")))
@interface CommonMovieViewModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (CommonMovieViewModel *)createResponse:(CommonMovieResponse *)response __attribute__((swift_name("create(response:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchViewModel")))
@interface CommonSearchViewModel : KotlinBase
- (instancetype)initWithMovies:(NSArray<CommonMovieViewModel *> *)movies __attribute__((swift_name("init(movies:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSDictionary<NSString *, NSString *> *> *)parseForFlutter __attribute__((swift_name("parseForFlutter()")));
- (NSArray<CommonMovieViewModel *> *)component1 __attribute__((swift_name("component1()")));
- (CommonSearchViewModel *)doCopyMovies:(NSArray<CommonMovieViewModel *> *)movies __attribute__((swift_name("doCopy(movies:)")));
@property NSArray<CommonMovieViewModel *> *movies;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchViewModel.Companion")))
@interface CommonSearchViewModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (CommonSearchViewModel *)createResponse:(CommonSearchResultResponse *)response __attribute__((swift_name("create(response:)")));
@end;

__attribute__((swift_name("MovieBrowserRepository")))
@protocol CommonMovieBrowserRepository
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieBrowserRepositoryImpl")))
@interface CommonMovieBrowserRepositoryImpl : KotlinBase <CommonMovieBrowserRepository>
- (instancetype)initWithApiService:(CommonMovieApiService *)apiService __attribute__((swift_name("init(apiService:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieResponse")))
@interface CommonMovieResponse : KotlinBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title year:(NSString *)year poster:(NSString *)poster rated:(NSString *)rated released:(NSString *)released runTime:(NSString *)runTime director:(NSString *)director writer:(NSString *)writer actors:(NSString *)actors plot:(NSString *)plot language:(NSString *)language country:(NSString *)country awards:(NSString *)awards ratingsResponse:(CommonRatingsResponse *)ratingsResponse metascore:(NSString *)metascore imdbRating:(NSString *)imdbRating imdbVotes:(NSString *)imdbVotes type:(NSString *)type dvdReleaseDate:(NSString *)dvdReleaseDate boxOfficeEarn:(NSString *)boxOfficeEarn productionHouse:(NSString *)productionHouse website:(NSString *)website __attribute__((swift_name("init(id:title:year:poster:rated:released:runTime:director:writer:actors:plot:language:country:awards:ratingsResponse:metascore:imdbRating:imdbVotes:type:dvdReleaseDate:boxOfficeEarn:productionHouse:website:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (CommonRatingsResponse *)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString *)component17 __attribute__((swift_name("component17()")));
- (NSString *)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component22 __attribute__((swift_name("component22()")));
- (NSString *)component23 __attribute__((swift_name("component23()")));
- (CommonMovieResponse *)doCopyId:(NSString *)id title:(NSString *)title year:(NSString *)year poster:(NSString *)poster rated:(NSString *)rated released:(NSString *)released runTime:(NSString *)runTime director:(NSString *)director writer:(NSString *)writer actors:(NSString *)actors plot:(NSString *)plot language:(NSString *)language country:(NSString *)country awards:(NSString *)awards ratingsResponse:(CommonRatingsResponse *)ratingsResponse metascore:(NSString *)metascore imdbRating:(NSString *)imdbRating imdbVotes:(NSString *)imdbVotes type:(NSString *)type dvdReleaseDate:(NSString *)dvdReleaseDate boxOfficeEarn:(NSString *)boxOfficeEarn productionHouse:(NSString *)productionHouse website:(NSString *)website __attribute__((swift_name("doCopy(id:title:year:poster:rated:released:runTime:director:writer:actors:plot:language:country:awards:ratingsResponse:metascore:imdbRating:imdbVotes:type:dvdReleaseDate:boxOfficeEarn:productionHouse:website:)")));
@property (readonly) NSString *id;
@property (readonly) NSString *title;
@property (readonly) NSString *year;
@property (readonly) NSString *poster;
@property (readonly) NSString *rated;
@property (readonly) NSString *released;
@property (readonly) NSString *runTime;
@property (readonly) NSString *director;
@property (readonly) NSString *writer;
@property (readonly) NSString *actors;
@property (readonly) NSString *plot;
@property (readonly) NSString *language;
@property (readonly) NSString *country;
@property (readonly) NSString *awards;
@property (readonly) CommonRatingsResponse *ratingsResponse;
@property (readonly) NSString *metascore;
@property (readonly) NSString *imdbRating;
@property (readonly) NSString *imdbVotes;
@property (readonly) NSString *type;
@property (readonly) NSString *dvdReleaseDate;
@property (readonly) NSString *boxOfficeEarn;
@property (readonly) NSString *productionHouse;
@property (readonly) NSString *website;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieResponse.Companion")))
@interface CommonMovieResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol CommonKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeOutput:(id<CommonKotlinx_serialization_runtime_nativeEncoder>)output obj:(id _Nullable)obj __attribute__((swift_name("serialize(output:obj:)")));
@property (readonly) id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol CommonKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (id _Nullable)patchInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input old:(id _Nullable)old __attribute__((swift_name("patch(input:old:)")));
@property (readonly) id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol CommonKotlinx_serialization_runtime_nativeKSerializer <CommonKotlinx_serialization_runtime_nativeSerializationStrategy, CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieResponse.$serializer")))
@interface CommonMovieResponse$serializer : KotlinBase <CommonKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CommonMovieResponse *)deserializeInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (CommonMovieResponse *)patchInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input old:(CommonMovieResponse *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<CommonKotlinx_serialization_runtime_nativeEncoder>)output obj:(CommonMovieResponse *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingsResponse")))
@interface CommonRatingsResponse : KotlinBase
- (instancetype)initWithSource:(NSString *)source value:(NSString *)value __attribute__((swift_name("init(source:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonRatingsResponse *)doCopySource:(NSString *)source value:(NSString *)value __attribute__((swift_name("doCopy(source:value:)")));
@property (readonly) NSString *source;
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingsResponse.Companion")))
@interface CommonRatingsResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingsResponse.$serializer")))
@interface CommonRatingsResponse$serializer : KotlinBase <CommonKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CommonRatingsResponse *)deserializeInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (CommonRatingsResponse *)patchInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input old:(CommonRatingsResponse *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<CommonKotlinx_serialization_runtime_nativeEncoder>)output obj:(CommonRatingsResponse *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultResponse")))
@interface CommonSearchResultResponse : KotlinBase
- (instancetype)initWithSearchResult:(NSArray<CommonMovieResponse *> *)searchResult response:(NSString *)response __attribute__((swift_name("init(searchResult:response:)"))) __attribute__((objc_designated_initializer));
- (NSArray<CommonMovieResponse *> *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonSearchResultResponse *)doCopySearchResult:(NSArray<CommonMovieResponse *> *)searchResult response:(NSString *)response __attribute__((swift_name("doCopy(searchResult:response:)")));
@property (readonly) NSArray<CommonMovieResponse *> *searchResult;
@property (readonly) NSString *response;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultResponse.Companion")))
@interface CommonSearchResultResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultResponse.$serializer")))
@interface CommonSearchResultResponse$serializer : KotlinBase <CommonKotlinx_serialization_runtime_nativeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CommonSearchResultResponse *)deserializeInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input __attribute__((swift_name("deserialize(input:)")));
- (CommonSearchResultResponse *)patchInput:(id<CommonKotlinx_serialization_runtime_nativeDecoder>)input old:(CommonSearchResultResponse *)old __attribute__((swift_name("patch(input:old:)")));
- (void)serializeOutput:(id<CommonKotlinx_serialization_runtime_nativeEncoder>)output obj:(CommonSearchResultResponse *)obj __attribute__((swift_name("serialize(output:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieApiService")))
@interface CommonMovieApiService : KotlinBase
- (instancetype)initWithEndPoint:(NSString *)endPoint apiKey:(NSString *)apiKey __attribute__((swift_name("init(endPoint:apiKey:)"))) __attribute__((objc_designated_initializer));
- (CommonKtor_client_core_iosHttpClient *)makeHttpClient __attribute__((swift_name("makeHttpClient()")));
@property CommonKtor_client_core_iosHttpClient *client;
@end;

__attribute__((swift_name("Ktor_client_core_iosHttpClientFeature")))
@protocol CommonKtor_client_core_iosHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(CommonKtor_client_core_iosHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(CommonKotlinUnit *(^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CommonKtor_utils_iosAttributeKey *key;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MovieBrowserApiAdapter")))
@interface CommonMovieBrowserApiAdapter : KotlinBase <CommonKtor_client_core_iosHttpClientFeature>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)movieBrowserApiAdapter __attribute__((swift_name("init()")));
- (CommonMovieBrowserApiAdapter *)prepareBlock:(CommonKotlinUnit *(^)(CommonKotlinUnit *))block __attribute__((swift_name("prepare(block:)")));
- (void)installFeature:(CommonMovieBrowserApiAdapter *)feature scope:(CommonKtor_client_core_iosHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) CommonKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadRequest")))
@interface CommonBadRequest : CommonKotlinThrowable
- (instancetype)initWithResponse:(id<CommonKtor_client_core_iosHttpResponse>)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<CommonKtor_client_core_iosHttpResponse> response;
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CommonKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CommonKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CommonKotlinCoroutineContextElement> _Nullable)getKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CommonKotlinCoroutineContext>)minusKeyKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CommonKotlinCoroutineContext>)plusContext:(id<CommonKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol CommonKotlinx_serialization_runtime_nativeEncoder
@required
- (id<CommonKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(CommonKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<CommonKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(CommonKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(CommonKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSaver:(id<CommonKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(saver:value:)")));
- (void)encodeSerializableValueSaver:(id<CommonKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(saver:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<CommonKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol CommonKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<CommonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<CommonKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) CommonKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol CommonKotlinx_serialization_runtime_nativeDecoder
@required
- (id<CommonKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(CommonKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(CommonKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueLoader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableValue(loader:)")));
- (id _Nullable)decodeSerializableValueLoader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableValue(loader:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueLoader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(loader:old:)")));
- (id _Nullable)updateSerializableValueLoader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(loader:old:)")));
@property (readonly) id<CommonKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) CommonKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("Kotlinx_io_nativeCloseable")))
@protocol CommonKotlinx_io_nativeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpClient")))
@interface CommonKtor_client_core_iosHttpClient : KotlinBase <CommonKotlinx_coroutines_core_nativeCoroutineScope, CommonKotlinx_io_nativeCloseable>
- (instancetype)initWithEngine:(id<CommonKtor_client_core_iosHttpClientEngine>)engine userConfig:(CommonKtor_client_core_iosHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (CommonKtor_client_core_iosHttpClient *)configBlock:(CommonKotlinUnit *(^)(CommonKtor_client_core_iosHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
@property (readonly) id<CommonKtor_utils_iosAttributes> attributes;
@property (readonly) CommonKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@property (readonly) CommonKtor_client_core_iosHttpClientEngineConfig *engineConfig;
@property (readonly) CommonKtor_client_core_iosHttpReceivePipeline *receivePipeline;
@property (readonly) CommonKtor_client_core_iosHttpRequestPipeline *requestPipeline;
@property (readonly) CommonKtor_client_core_iosHttpResponsePipeline *responsePipeline;
@property (readonly) CommonKtor_client_core_iosHttpSendPipeline *sendPipeline;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utils_iosAttributeKey")))
@interface CommonKtor_utils_iosAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Ktor_http_iosHttpMessage")))
@protocol CommonKtor_http_iosHttpMessage
@required
@property (readonly) id<CommonKtor_http_iosHeaders> headers;
@end;

__attribute__((swift_name("Ktor_client_core_iosHttpResponse")))
@protocol CommonKtor_client_core_iosHttpResponse <CommonKtor_http_iosHttpMessage, CommonKotlinx_coroutines_core_nativeCoroutineScope, CommonKotlinx_io_nativeCloseable>
@required
@property (readonly) CommonKtor_client_core_iosHttpClientCall *call;
@property (readonly) id<CommonKotlinx_coroutines_io_nativeByteReadChannel> content;
@property (readonly) id<CommonKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) CommonKtor_utils_iosGMTDate *requestTime;
@property (readonly) CommonKtor_utils_iosGMTDate *responseTime;
@property (readonly) CommonKtor_http_iosHttpStatusCode *status;
@property (readonly) CommonKtor_http_iosHttpProtocolVersion *version;
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CommonKotlinCoroutineContextElement <CommonKotlinCoroutineContext>
@required
@property (readonly) id<CommonKotlinCoroutineContextKey> key;
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CommonKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol CommonKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<CommonKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:saver:value:)")));
- (void)encodeSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index saver:(id<CommonKotlinx_serialization_runtime_nativeSerializationStrategy>)saver value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:saver:value:)")));
- (void)encodeShortElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<CommonKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface CommonKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <CommonKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<CommonKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<CommonKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<CommonKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface CommonKotlinx_serialization_runtime_nativeEnumDescriptor : CommonKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(CommonKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<CommonKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol CommonKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<CommonKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<CommonKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<CommonKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface CommonKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol CommonKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeNullableSerializableElement(desc:index:loader:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader __attribute__((swift_name("decodeSerializableElement(desc:index:loader:)")));
- (int16_t)decodeShortElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:loader:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<CommonKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index loader:(id<CommonKotlinx_serialization_runtime_nativeDeserializationStrategy>)loader old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:loader:old:)")));
@property (readonly) id<CommonKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) CommonKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CommonKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CommonKotlinEnum : KotlinBase <CommonKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(CommonKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface CommonKotlinx_serialization_runtime_nativeUpdateMode : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) CommonKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) CommonKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Ktor_client_core_iosHttpClientEngine")))
@protocol CommonKtor_client_core_iosHttpClientEngine <CommonKotlinx_coroutines_core_nativeCoroutineScope, CommonKotlinx_io_nativeCloseable>
@required
@property (readonly) CommonKtor_client_core_iosHttpClientEngineConfig *config;
@property (readonly) CommonKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpClientConfig")))
@interface CommonKtor_client_core_iosHttpClientConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonKtor_client_core_iosHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(CommonKotlinUnit *(^)(CommonKtor_client_core_iosHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CommonKtor_client_core_iosHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<CommonKtor_client_core_iosHttpClientFeature>)feature configure:(CommonKotlinUnit *(^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(CommonKotlinUnit *(^)(CommonKtor_client_core_iosHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CommonKtor_client_core_iosHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess;
@property BOOL followRedirects;
@property BOOL useDefaultTransformers;
@end;

__attribute__((swift_name("Ktor_utils_iosAttributes")))
@protocol CommonKtor_utils_iosAttributes
@required
- (id)computeIfAbsentKey:(CommonKtor_utils_iosAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CommonKtor_utils_iosAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CommonKtor_utils_iosAttributeKey *> *allKeys;
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CommonKotlinAbstractCoroutineContextElement : KotlinBase <CommonKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CommonKotlinContinuationInterceptor <CommonKotlinCoroutineContextElement>
@required
- (id<CommonKotlinContinuation>)interceptContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineDispatcher")))
@interface CommonKotlinx_coroutines_core_nativeCoroutineDispatcher : CommonKotlinAbstractCoroutineContextElement <CommonKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (BOOL)isDispatchNeededContext:(id<CommonKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CommonKotlinx_coroutines_core_nativeCoroutineDispatcher *)plusOther:(CommonKotlinx_coroutines_core_nativeCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
@end;

__attribute__((swift_name("Ktor_client_core_iosHttpClientEngineConfig")))
@interface CommonKtor_client_core_iosHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property CommonKotlinx_coroutines_core_nativeCoroutineDispatcher * _Nullable dispatcher;
@property BOOL pipelining;
@property (readonly) CommonKtor_client_core_iosHttpResponseConfig *response;
@property int32_t threadsCount;
@end;

__attribute__((swift_name("Ktor_utils_iosPipeline")))
@interface CommonKtor_utils_iosPipeline : KotlinBase
- (instancetype)initWithPhase:(CommonKtor_utils_iosPipelinePhase *)phase interceptors:(NSArray<id<CommonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CommonKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CommonKtor_utils_iosPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(CommonKtor_utils_iosPipelinePhase *)reference phase:(CommonKtor_utils_iosPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CommonKtor_utils_iosPipelinePhase *)reference phase:(CommonKtor_utils_iosPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CommonKtor_utils_iosPipelinePhase *)phase block:(id<CommonKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(CommonKtor_utils_iosPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<CommonKtor_utils_iosAttributes> attributes;
@property (readonly) BOOL isEmpty;
@property (readonly) NSArray<CommonKtor_utils_iosPipelinePhase *> *items;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpReceivePipeline")))
@interface CommonKtor_client_core_iosHttpReceivePipeline : CommonKtor_utils_iosPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonKtor_utils_iosPipelinePhase *)phase interceptors:(NSArray<id<CommonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpRequestPipeline")))
@interface CommonKtor_client_core_iosHttpRequestPipeline : CommonKtor_utils_iosPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonKtor_utils_iosPipelinePhase *)phase interceptors:(NSArray<id<CommonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpResponsePipeline")))
@interface CommonKtor_client_core_iosHttpResponsePipeline : CommonKtor_utils_iosPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonKtor_utils_iosPipelinePhase *)phase interceptors:(NSArray<id<CommonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpSendPipeline")))
@interface CommonKtor_client_core_iosHttpSendPipeline : CommonKtor_utils_iosPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(CommonKtor_utils_iosPipelinePhase *)phase interceptors:(NSArray<id<CommonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_core_iosHttpClientCall")))
@interface CommonKtor_client_core_iosHttpClientCall : KotlinBase <CommonKotlinx_coroutines_core_nativeCoroutineScope, CommonKotlinx_io_nativeCloseable>
@property (readonly) CommonKtor_client_core_iosHttpClient *client;
@property (readonly) id<CommonKtor_client_core_iosHttpRequest> request;
@property (readonly) id<CommonKtor_client_core_iosHttpResponse> response;
@property (readonly) CommonKtor_client_core_iosHttpResponseConfig *responseConfig;
@end;

__attribute__((swift_name("Kotlinx_coroutines_io_nativeByteReadChannel")))
@protocol CommonKotlinx_coroutines_io_nativeByteReadChannel
@required
- (BOOL)cancelCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (void)readSessionConsumer:(CommonKotlinUnit *(^)(id<CommonKotlinx_coroutines_io_nativeReadSession>))consumer __attribute__((swift_name("readSession(consumer:)")));
@property (readonly) int32_t availableForRead;
@property (readonly) BOOL isClosedForRead;
@property (readonly) BOOL isClosedForWrite;
@property CommonKotlinx_io_nativeByteOrder *readByteOrder;
@property (readonly) int64_t totalBytesRead;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeJob")))
@protocol CommonKotlinx_coroutines_core_nativeJob <CommonKotlinCoroutineContextElement>
@required
- (id<CommonKotlinx_coroutines_core_nativeChildHandle>)attachChildChild:(id<CommonKotlinx_coroutines_core_nativeChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)cancelCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancel0 __attribute__((swift_name("cancel0()")));
- (CommonKotlinx_coroutines_core_nativeCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CommonKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(CommonKotlinUnit *(^)(CommonKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<CommonKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionHandler:(CommonKotlinUnit *(^)(CommonKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<CommonKotlinx_coroutines_core_nativeJob>)plusOther_:(id<CommonKotlinx_coroutines_core_nativeJob>)other __attribute__((swift_name("plus(other_:)")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CommonKotlinSequence> children;
@property (readonly) BOOL isActive;
@property (readonly) BOOL isCancelled;
@property (readonly) BOOL isCompleted;
@property (readonly) id<CommonKotlinx_coroutines_core_nativeSelectClause0> onJoin;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utils_iosGMTDate")))
@interface CommonKtor_utils_iosGMTDate : KotlinBase <CommonKotlinComparable>
- (int32_t)compareToOther:(CommonKtor_utils_iosGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CommonKtor_utils_iosWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (CommonKtor_utils_iosMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (CommonKtor_utils_iosGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CommonKtor_utils_iosWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CommonKtor_utils_iosMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
@property (readonly) int32_t dayOfMonth;
@property (readonly) CommonKtor_utils_iosWeekDay *dayOfWeek;
@property (readonly) int32_t dayOfYear;
@property (readonly) int32_t hours;
@property (readonly) int32_t minutes;
@property (readonly) CommonKtor_utils_iosMonth *month;
@property (readonly) int32_t seconds;
@property (readonly) int64_t timestamp;
@property (readonly) int32_t year;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosHttpStatusCode")))
@interface CommonKtor_http_iosHttpStatusCode : KotlinBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonKtor_http_iosHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CommonKtor_http_iosHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
@property (readonly, getter=description_) NSString *description;
@property (readonly) int32_t value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosHttpProtocolVersion")))
@interface CommonKtor_http_iosHttpProtocolVersion : KotlinBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CommonKtor_http_iosHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
@property (readonly) int32_t major;
@property (readonly) int32_t minor;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_utils_iosStringValues")))
@protocol CommonKtor_utils_iosStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CommonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(CommonKotlinUnit *(^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName;
@end;

__attribute__((swift_name("Ktor_http_iosHeaders")))
@protocol CommonKtor_http_iosHeaders <CommonKtor_utils_iosStringValues>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol CommonKotlinx_serialization_runtime_nativeGeneratedSerializer <CommonKotlinx_serialization_runtime_nativeKSerializer>
@required
- (CommonKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonKotlinKClass <CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CommonKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CommonKotlinCoroutineContext> context;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeRunnable")))
@protocol CommonKotlinx_coroutines_core_nativeRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_client_core_iosHttpResponseConfig")))
@interface CommonKtor_client_core_iosHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property CommonKotlinx_io_nativeCharset *defaultCharset;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utils_iosPipelinePhase")))
@interface CommonKtor_utils_iosPipelinePhase : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol CommonKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CommonKotlinSuspendFunction2 <CommonKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Ktor_client_core_iosHttpRequest")))
@protocol CommonKtor_client_core_iosHttpRequest <CommonKtor_http_iosHttpMessage, CommonKotlinx_coroutines_core_nativeCoroutineScope>
@required
@property (readonly) id<CommonKtor_utils_iosAttributes> attributes;
@property (readonly) CommonKtor_client_core_iosHttpClientCall *call;
@property (readonly) CommonKtor_http_iosOutgoingContent *content;
@property (readonly) id<CommonKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) CommonKtor_http_iosHttpMethod *method;
@property (readonly) CommonKtor_http_iosUrl *url;
@end;

__attribute__((swift_name("Kotlinx_coroutines_io_nativeReadSession")))
@protocol CommonKotlinx_coroutines_io_nativeReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (CommonKotlinx_io_nativeIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_nativeByteOrder")))
@interface CommonKotlinx_io_nativeByteOrder : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonKotlinx_io_nativeByteOrder *bigEndian;
@property (class, readonly) CommonKotlinx_io_nativeByteOrder *littleEndian;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonKotlinx_io_nativeByteOrder *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeDisposableHandle")))
@protocol CommonKotlinx_coroutines_core_nativeDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildHandle")))
@protocol CommonKotlinx_coroutines_core_nativeChildHandle <CommonKotlinx_coroutines_core_nativeDisposableHandle>
@required
- (BOOL)childCancelledCause:(CommonKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildJob")))
@protocol CommonKotlinx_coroutines_core_nativeChildJob <CommonKotlinx_coroutines_core_nativeJob>
@required
- (void)parentCancelledParentJob:(id<CommonKotlinx_coroutines_core_nativeParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonKotlinException : CommonKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonKotlinRuntimeException : CommonKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonKotlinIllegalStateException : CommonKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCancellationException")))
@interface CommonKotlinx_coroutines_core_nativeCancellationException : CommonKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol CommonKotlinSequence
@required
- (id<CommonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectClause0")))
@protocol CommonKotlinx_coroutines_core_nativeSelectClause0
@required
- (void)registerSelectClause0Select:(id<CommonKotlinx_coroutines_core_nativeSelectInstance>)select block:(id<CommonKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utils_iosWeekDay")))
@interface CommonKtor_utils_iosWeekDay : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonKtor_utils_iosWeekDay *monday;
@property (class, readonly) CommonKtor_utils_iosWeekDay *tuesday;
@property (class, readonly) CommonKtor_utils_iosWeekDay *wednesday;
@property (class, readonly) CommonKtor_utils_iosWeekDay *thursday;
@property (class, readonly) CommonKtor_utils_iosWeekDay *friday;
@property (class, readonly) CommonKtor_utils_iosWeekDay *saturday;
@property (class, readonly) CommonKtor_utils_iosWeekDay *sunday;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonKtor_utils_iosWeekDay *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utils_iosMonth")))
@interface CommonKtor_utils_iosMonth : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CommonKtor_utils_iosMonth *january;
@property (class, readonly) CommonKtor_utils_iosMonth *february;
@property (class, readonly) CommonKtor_utils_iosMonth *march;
@property (class, readonly) CommonKtor_utils_iosMonth *april;
@property (class, readonly) CommonKtor_utils_iosMonth *may;
@property (class, readonly) CommonKtor_utils_iosMonth *june;
@property (class, readonly) CommonKtor_utils_iosMonth *july;
@property (class, readonly) CommonKtor_utils_iosMonth *august;
@property (class, readonly) CommonKtor_utils_iosMonth *september;
@property (class, readonly) CommonKtor_utils_iosMonth *october;
@property (class, readonly) CommonKtor_utils_iosMonth *november;
@property (class, readonly) CommonKtor_utils_iosMonth *december;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CommonKtor_utils_iosMonth *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol CommonKotlinMapEntry
@required
@property (readonly) id _Nullable key;
@property (readonly) id _Nullable value;
@end;

__attribute__((swift_name("Kotlinx_io_nativeCharset")))
@interface CommonKotlinx_io_nativeCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinx_io_nativeCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (CommonKotlinx_io_nativeCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
@end;

__attribute__((swift_name("Ktor_http_iosOutgoingContent")))
@interface CommonKtor_http_iosOutgoingContent : KotlinBase
- (id _Nullable)getPropertyKey:(CommonKtor_utils_iosAttributeKey *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CommonKtor_utils_iosAttributeKey *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) CommonLong * _Nullable contentLength;
@property (readonly) CommonKtor_http_iosContentType * _Nullable contentType;
@property (readonly) id<CommonKtor_http_iosHeaders> headers;
@property (readonly) CommonKtor_http_iosHttpStatusCode * _Nullable status;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosHttpMethod")))
@interface CommonKtor_http_iosHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CommonKtor_http_iosHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosUrl")))
@interface CommonKtor_http_iosUrl : KotlinBase
- (instancetype)initWithProtocol:(CommonKtor_http_iosURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CommonKtor_http_iosParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (CommonKtor_http_iosURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<CommonKtor_http_iosParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (CommonKtor_http_iosUrl *)doCopyProtocol:(CommonKtor_http_iosURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CommonKtor_http_iosParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
@property (readonly) NSString *encodedPath;
@property (readonly) NSString *fragment;
@property (readonly) NSString *host;
@property (readonly) id<CommonKtor_http_iosParameters> parameters;
@property (readonly) NSString * _Nullable password;
@property (readonly) int32_t port;
@property (readonly) CommonKtor_http_iosURLProtocol *protocol;
@property (readonly) int32_t specifiedPort;
@property (readonly) BOOL trailingQuery;
@property (readonly) NSString * _Nullable user;
@end;

__attribute__((swift_name("Kotlinx_io_nativeInput")))
@protocol CommonKotlinx_io_nativeInput <CommonKotlinx_io_nativeCloseable>
@required
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (int32_t)peekToBuffer:(CommonKotlinx_io_nativeIoBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int32_t)readAvailableDst:(CommonKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length:)")));
- (int32_t)readAvailableDst:(CommonKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_:)")));
- (int32_t)readAvailableDst:(CommonKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length__:)")));
- (int32_t)readAvailableDst:(CommonKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length___:)")));
- (int32_t)readAvailableDst:(CommonKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length____:)")));
- (int32_t)readAvailableDst:(CommonKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length_____:)")));
- (int32_t)readAvailableDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readAvailable(dst:offset:length______:)")));
- (int64_t)readAvailableDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readAvailable(dst:offset:length_______:)")));
- (int32_t)readAvailableDst:(CommonKotlinx_io_nativeIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readAvailable(dst:length:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (double)readDouble __attribute__((swift_name("readDouble()")));
- (float)readFloat __attribute__((swift_name("readFloat()")));
- (void)readFullyDst:(CommonKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length:)")));
- (void)readFullyDst:(CommonKotlinDoubleArray *)dst offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_:)")));
- (void)readFullyDst:(CommonKotlinFloatArray *)dst offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length__:)")));
- (void)readFullyDst:(CommonKotlinIntArray *)dst offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length___:)")));
- (void)readFullyDst:(CommonKotlinLongArray *)dst offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length____:)")));
- (void)readFullyDst:(CommonKotlinShortArray *)dst offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length_____:)")));
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("readFully(dst:offset:length______:)")));
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("readFully(dst:offset:length_______:)")));
- (void)readFullyDst:(CommonKotlinx_io_nativeIoBuffer *)dst length:(int32_t)length __attribute__((swift_name("readFully(dst:length:)")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property CommonKotlinx_io_nativeByteOrder *byteOrder;
@property (readonly) BOOL endOfInput;
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol CommonKotlinAppendable
@required
- (id<CommonKotlinAppendable>)appendC:(unichar)c __attribute__((swift_name("append(c:)")));
- (id<CommonKotlinAppendable>)appendCsq:(id _Nullable)csq __attribute__((swift_name("append(csq:)")));
- (id<CommonKotlinAppendable>)appendCsq:(id _Nullable)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("append(csq:start:end_:)")));
@end;

__attribute__((swift_name("Kotlinx_io_nativeOutput")))
@protocol CommonKotlinx_io_nativeOutput <CommonKotlinAppendable, CommonKotlinx_io_nativeCloseable>
@required
- (id<CommonKotlinAppendable>)appendCsq:(CommonKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)fillN:(int64_t)n v:(int8_t)v __attribute__((swift_name("fill(n:v:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
- (void)writeDoubleV:(double)v __attribute__((swift_name("writeDouble(v:)")));
- (void)writeFloatV:(float)v __attribute__((swift_name("writeFloat(v:)")));
- (void)writeFullySrc:(CommonKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length:)")));
- (void)writeFullySrc:(CommonKotlinDoubleArray *)src offset:(int32_t)offset length_:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_:)")));
- (void)writeFullySrc:(CommonKotlinFloatArray *)src offset:(int32_t)offset length__:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length__:)")));
- (void)writeFullySrc:(CommonKotlinIntArray *)src offset:(int32_t)offset length___:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length___:)")));
- (void)writeFullySrc:(CommonKotlinLongArray *)src offset:(int32_t)offset length____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length____:)")));
- (void)writeFullySrc:(CommonKotlinShortArray *)src offset:(int32_t)offset length_____:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length_____:)")));
- (void)writeFullySrc:(void *)src offset:(int32_t)offset length______:(int32_t)length __attribute__((swift_name("writeFully(src:offset:length______:)")));
- (void)writeFullySrc:(void *)src offset:(int64_t)offset length_______:(int64_t)length __attribute__((swift_name("writeFully(src:offset:length_______:)")));
- (void)writeFullySrc:(CommonKotlinx_io_nativeIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeFully(src:length:)")));
- (void)writeIntV:(int32_t)v __attribute__((swift_name("writeInt(v:)")));
- (void)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (void)writeShortV:(int16_t)v __attribute__((swift_name("writeShort(v:)")));
@property CommonKotlinx_io_nativeByteOrder *byteOrder;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_nativeIoBuffer")))
@interface CommonKotlinx_io_nativeIoBuffer : KotlinBase <CommonKotlinx_io_nativeInput, CommonKotlinx_io_nativeOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer));
- (int32_t)appendCharsCsq:(CommonKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (BOOL)canWrite __attribute__((swift_name("canWrite()")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (BOOL)isExclusivelyOwned __attribute__((swift_name("isExclusivelyOwned()")));
- (CommonKotlinx_io_nativeIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (void)pushBackN:(int32_t)n __attribute__((swift_name("pushBack(n:)")));
- (void)readDst:(CommonKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("read(dst:offset:length:)")));
- (void)readDirectBlock:(CommonInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool:(id<CommonKotlinx_io_nativeObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reserveEndGapN:(int32_t)n __attribute__((swift_name("reserveEndGap(n:)")));
- (void)reserveStartGapN:(int32_t)n __attribute__((swift_name("reserveStartGap(n:)")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)writeArray:(CommonKotlinByteArray *)array offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("write(array:offset:length:)")));
- (int32_t)writeBufferSrc:(CommonKotlinx_io_nativeIoBuffer *)src length:(int32_t)length __attribute__((swift_name("writeBuffer(src:length:)")));
- (void)writeDirectBlock:(CommonInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property id _Nullable attachment;
@property (readonly) int32_t capacity;
@property (readonly) int32_t endGap;
@property CommonKotlinx_io_nativeIoBuffer * _Nullable next;
@property (readonly) int32_t readRemaining;
@property (readonly) int32_t startGap;
@property (readonly) int32_t writeRemaining;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeParentJob")))
@protocol CommonKotlinx_coroutines_core_nativeParentJob <CommonKotlinx_coroutines_core_nativeJob>
@required
- (CommonKotlinThrowable *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectInstance")))
@protocol CommonKotlinx_coroutines_core_nativeSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CommonKotlinx_coroutines_core_nativeDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicIfNotSelectedDesc:(CommonKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicIfNotSelected(desc:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CommonKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(CommonKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<CommonKotlinContinuation> completion;
@property (readonly) BOOL isSelected;
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol CommonKotlinSuspendFunction0 <CommonKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_io_nativeCharsetDecoder")))
@interface CommonKotlinx_io_nativeCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(CommonKotlinx_io_nativeCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_io_nativeCharsetEncoder")))
@interface CommonKotlinx_io_nativeCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(CommonKotlinx_io_nativeCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Ktor_http_iosHeaderValueWithParameters")))
@interface CommonKtor_http_iosHeaderValueWithParameters : KotlinBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonKtor_http_iosHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
@property (readonly) NSString *content;
@property (readonly) NSArray<CommonKtor_http_iosHeaderValueParam *> *parameters;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosContentType")))
@interface CommonKtor_http_iosContentType : CommonKtor_http_iosHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CommonKtor_http_iosHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonKtor_http_iosHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchPattern:(CommonKtor_http_iosContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CommonKtor_http_iosContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CommonKtor_http_iosContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype;
@property (readonly) NSString *contentType;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosURLProtocol")))
@interface CommonKtor_http_iosURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (CommonKtor_http_iosURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
@property (readonly) int32_t defaultPort;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Ktor_http_iosParameters")))
@protocol CommonKtor_http_iosParameters <CommonKtor_utils_iosStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CommonKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonByte *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface CommonKotlinDoubleArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonDouble *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface CommonKotlinFloatArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonFloat *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface CommonKotlinIntArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonInt *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface CommonKotlinLongArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonLong *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface CommonKotlinShortArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonShort *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface CommonKotlinCharArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_io_nativeObjectPool")))
@protocol CommonKotlinx_io_nativeObjectPool <CommonKotlinx_io_nativeCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicDesc")))
@interface CommonKotlinx_coroutines_core_nativeAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CommonKotlinx_coroutines_core_nativeAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CommonKotlinx_coroutines_core_nativeAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_http_iosHeaderValueParam")))
@interface CommonKtor_http_iosHeaderValueParam : KotlinBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonKtor_http_iosHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
@property (readonly) NSString *name;
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CommonKotlinByteIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinDoubleIterator")))
@interface CommonKotlinDoubleIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end;

__attribute__((swift_name("KotlinFloatIterator")))
@interface CommonKotlinFloatIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface CommonKotlinIntIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface CommonKotlinLongIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((swift_name("KotlinShortIterator")))
@interface CommonKotlinShortIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface CommonKotlinCharIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeOpDescriptor")))
@interface CommonKotlinx_coroutines_core_nativeOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicOp")))
@interface CommonKotlinx_coroutines_core_nativeAtomicOp : CommonKotlinx_coroutines_core_nativeOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided;
@end;

NS_ASSUME_NONNULL_END
