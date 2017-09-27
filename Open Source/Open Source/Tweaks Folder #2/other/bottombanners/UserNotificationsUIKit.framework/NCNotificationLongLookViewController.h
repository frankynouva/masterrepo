/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCLongLookPresentationControllerDelegate, NCLongLookTransitionDelegateObserver> {
    NCLongLookTransitionDelegate * _longLookTransitionDelegate;
    NCNotificationShortLookViewController * _presentingNotificationViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (id)_extensionIdentifier;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_handleCloseButton:(id)arg1;
- (void)_handleIconButton:(id)arg1;
- (void)_handleNotificationTap:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(bool)arg3;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (void)_loadLookView;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 parentContentContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_presentingNotificationViewController;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldPadScrollViewContentSizeHeight;
- (double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)contentProviderDismissCustomContent:(id)arg1 animated:(bool)arg2;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isLookStyleLongLook;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (unsigned long long)longLookPresentationControllerDismissalEdge:(id)arg1;
- (bool)longLookPresentationControllerPreviewShouldIncludeShadow:(id)arg1;
- (bool)longLookPresentationControllerShouldIncludePreview:(id)arg1;
- (bool)longLookPresentationControllerShouldRestoreSourceView:(id)arg1;
- (void)longLookTransitionDelegate:(id)arg1 didBeginTransitionWithAnimator:(id)arg2;
- (void)longLookTransitionDelegate:(id)arg1 didEndTransitionWithAnimator:(id)arg2 completed:(bool)arg3;
- (bool)resignFirstResponder;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
