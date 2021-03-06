#import <UIKit/UIKit.h>

@interface UIImage (WithShadow)

- (UIImage *)operateOn:(void (^)(CGContextRef context, CGRect rect))block;
- (UIImage *)blendMode:(CGBlendMode)blendMode color:(CGColorRef)color;

- (UIImage *)blendMode:(CGBlendMode)blendMode image:(CGImageRef)image;
- (UIImage *)blendMode:(CGBlendMode)blendMode color:(CGColorRef)color reverse:(BOOL)reverse;
- (UIImage *)wrap:(UIImage *)newImage;
- (UIImage *)resizedImageFitSize:(CGSize)frameSize;
- (UIImage *)resizedImageFitSize:(CGSize)frameSize edgeInsets:(UIEdgeInsets)insets;
- (UIImage *)resizedImage:(CGFloat)ratio;
- (UIImage *)resizedImage:(CGFloat)ratio edgeInsets:(UIEdgeInsets)insets;
- (UIImage *)clippingMask:(CGColorRef)clippingMask;

@end
