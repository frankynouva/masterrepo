/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationShortLookView : NCNotificationShortLookView {
    UIView * _additionalContentAccessoryView;
    double  _additionalContentHeight;
    double  _additionalContentPercentRevealed;
}

@property (nonatomic, retain) UIView *additionalContentAccessoryView;
@property (nonatomic) double additionalContentHeight;
@property (nonatomic, readonly) double additionalContentHeightDelta;
@property (nonatomic) double additionalContentPercentRevealed;
@property (getter=isAdditionalContentRevealed, nonatomic, readonly) bool additionalContentRevealed;

- (void).cxx_destruct;
- (bool)_hasAdditionalContent;
- (void)_layoutAdditionalContent;
- (void)_layoutContent;
- (id)_legacyNotificationContentView;
- (id)_newNotificationContentView;
- (bool)_shouldShowGrabber;
- (void)_updateContentVisibilityWithPercent:(double)arg1;
- (void)_updateSizeWithPercent:(double)arg1;
- (id)additionalContentAccessoryView;
- (double)additionalContentHeight;
- (double)additionalContentHeightDelta;
- (double)additionalContentPercentRevealed;
- (bool)isAdditionalContentRevealed;
- (void)layoutSubviews;
- (void)setAdditionalContentAccessoryView:(id)arg1;
- (void)setAdditionalContentHeight:(double)arg1;
- (void)setAdditionalContentPercentRevealed:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)textHeightDelta;

@end
