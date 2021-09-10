
// This file has been auto generated.

#include "SkPixmap.h"
#include "common.h"

static void deletePixmap(SkPixmap *pixmap) {
    delete pixmap;
}

extern "C" jlong org_jetbrains_skia_Pixmap__1nGetFinalizer
  (kref __Kinstance) {
    return ptrToJlong(&deletePixmap);
}

extern "C" jlong org_jetbrains_skia_Pixmap__1nMakeNull
  (kref __Kinstance) {
    return ptrToJlong(new SkPixmap());
}

extern "C" jlong org_jetbrains_skia_Pixmap__1nMake
  (kref __Kinstance,
  jint width, jint height, jint colorType, jint alphaType, jlong colorSpacePtr, jlong pixelsPtr, jint rowBytes) {
    SkColorSpace* colorSpace = jlongToPtr<SkColorSpace*>(colorSpacePtr);
    SkImageInfo imageInfo = SkImageInfo::Make(width,
                                          height,
                                          static_cast<SkColorType>(colorType),
                                          static_cast<SkAlphaType>(alphaType),
                                          sk_ref_sp<SkColorSpace>(colorSpace));
    return ptrToJlong(new SkPixmap(
        imageInfo, jlongToPtr<void*>(pixelsPtr), rowBytes));
}

extern "C" void org_jetbrains_skia_Pixmap__1nReset
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    pixmap->reset();
}

extern "C" void org_jetbrains_skia_Pixmap__1nResetWithInfo
  (kref __Kinstance, jlong ptr,
  jint width, jint height, jint colorType, jint alphaType, jlong colorSpacePtr, jlong pixelsPtr, jint rowBytes) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkColorSpace* colorSpace = jlongToPtr<SkColorSpace*>(colorSpacePtr);
    SkImageInfo imageInfo = SkImageInfo::Make(width,
                                          height,
                                          static_cast<SkColorType>(colorType),
                                          static_cast<SkAlphaType>(alphaType),
                                          sk_ref_sp<SkColorSpace>(colorSpace));
    pixmap->reset(imageInfo, jlongToPtr<void*>(pixelsPtr), rowBytes);
}

extern "C" void org_jetbrains_skia_Pixmap__1nSetColorSpace
  (kref __Kinstance, jlong ptr, jlong colorSpacePtr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkColorSpace* colorSpace = jlongToPtr<SkColorSpace*>(colorSpacePtr);
    pixmap->setColorSpace(sk_ref_sp<SkColorSpace>(colorSpace));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nExtractSubset
  (kref __Kinstance, jlong ptr,
  jlong subsetPtr, jint l, jint t, jint w, jint h) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkPixmap* dst = jlongToPtr<SkPixmap*>(subsetPtr);
    return pixmap->extractSubset(dst, { l, t, w, h });
}


extern "C" jobject org_jetbrains_skia_Pixmap__1nGetInfo
  (kref __Kinstance, jlong ptr) {
    TODO("implement org_jetbrains_skia_Pixmap__1nGetInfo");
}
     
#if 0 
extern "C" jobject org_jetbrains_skia_Pixmap__1nGetInfo
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    const SkImageInfo& imageInfo = pixmap->info();
    return skija::ImageInfo::toJava(env, imageInfo);
}
#endif


extern "C" jint org_jetbrains_skia_Pixmap__1nGetRowBytes
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jint>(pixmap->rowBytes());
}

extern "C" jlong org_jetbrains_skia_Pixmap__1nGetAddr
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return ptrToJlong(pixmap->addr());
}

extern "C" jint org_jetbrains_skia_Pixmap__1nGetRowBytesAsPixels
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jint>(pixmap->rowBytesAsPixels());
}

extern "C" jint org_jetbrains_skia_Pixmap__1nComputeByteSize
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jint>(pixmap->computeByteSize());
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nComputeIsOpaque
  (kref __Kinstance, jlong ptr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jboolean>(pixmap->computeIsOpaque());
}

extern "C" jint org_jetbrains_skia_Pixmap__1nGetColor
  (kref __Kinstance, jlong ptr, jint x, jint y) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jint>(pixmap->getColor(x, y));
}

extern "C" jfloat org_jetbrains_skia_Pixmap__1nGetAlphaF
  (kref __Kinstance, jlong ptr, jint x, jint y) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jfloat>(pixmap->getAlphaf(x, y));
}

extern "C" jlong org_jetbrains_skia_Pixmap__1nGetAddrAt
  (kref __Kinstance, jlong ptr, jint x, jint y) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return reinterpret_cast<jlong>(pixmap->addr(x, y));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nReadPixels
  (kref __Kinstance, jlong ptr,
  jint width, jint height, jint colorType, jint alphaType, jlong colorSpacePtr, jlong pixelsPtr, jint rowBytes) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkColorSpace* colorSpace = jlongToPtr<SkColorSpace*>(colorSpacePtr);
    SkImageInfo imageInfo = SkImageInfo::Make(width,
                                          height,
                                          static_cast<SkColorType>(colorType),
                                          static_cast<SkAlphaType>(alphaType),
                                          sk_ref_sp<SkColorSpace>(colorSpace));
    return static_cast<jboolean>(pixmap->readPixels(imageInfo, jlongToPtr<void*>(pixelsPtr), rowBytes));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nReadPixelsFromPoint
  (kref __Kinstance, jlong ptr,
  jint width, jint height, jint colorType, jint alphaType, jlong colorSpacePtr, jlong pixelsPtr, jint rowBytes,
  jint srcX, jint srcY) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkColorSpace* colorSpace = jlongToPtr<SkColorSpace*>(colorSpacePtr);
    SkImageInfo imageInfo = SkImageInfo::Make(width,
                                          height,
                                          static_cast<SkColorType>(colorType),
                                          static_cast<SkAlphaType>(alphaType),
                                          sk_ref_sp<SkColorSpace>(colorSpace));
    return static_cast<jboolean>(pixmap->readPixels(imageInfo, jlongToPtr<void*>(pixelsPtr), rowBytes, srcX, srcY));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nReadPixelsToPixmap
  (kref __Kinstance, jlong ptr, jlong dstPixmapPtr) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkPixmap* dstPixmap = jlongToPtr<SkPixmap*>(dstPixmapPtr);
    return static_cast<jboolean>(pixmap->readPixels(*dstPixmap));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nReadPixelsToPixmapFromPoint
  (kref __Kinstance, jlong ptr, jlong dstPixmapPtr, jint srcX, jint srcY) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkPixmap* dstPixmap = jlongToPtr<SkPixmap*>(dstPixmapPtr);
    return static_cast<jboolean>(pixmap->readPixels(*dstPixmap, srcX, srcY));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nScalePixels
  (kref __Kinstance, jlong ptr, jlong dstPixmapPtr, jlong samplingOptions) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    SkPixmap* dstPixmap = jlongToPtr<SkPixmap*>(dstPixmapPtr);
    return static_cast<jboolean>(pixmap->scalePixels(*dstPixmap, skija::SamplingMode::unpack(samplingOptions)));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nErase
  (kref __Kinstance, jlong ptr, jint color) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jboolean>(pixmap->erase(color));
}

extern "C" jboolean org_jetbrains_skia_Pixmap__1nEraseSubset
  (kref __Kinstance, jlong ptr, jint color, jint l, jint t, jint w, jint h) {
    SkPixmap* pixmap = jlongToPtr<SkPixmap*>(ptr);
    return static_cast<jboolean>(pixmap->erase(color, { l, t, w, h }));
}
