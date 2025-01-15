using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Microsoft.MixedReality.Toolkit.Utilities;

namespace MRTKExtensions.Gesture
{
    public static class GestureUtils
    {
        private const float PinchThreshold = 0.7f;
        private const float GrabThreshold = 0.4f;

        public static bool IsOneFingerGesture(Handedness trackedHand)
        {
            return (!HandPoseUtils.IsIndexGrabbing(trackedHand)) &&
                HandPoseUtils.IsMiddleGrabbing(trackedHand) &&
                HandPoseUtils.IsThumbGrabbing(trackedHand) &&
                HandPoseUtils.RingFingerCurl(trackedHand) > PinchThreshold &&
                HandPoseUtils.PinkyFingerCurl(trackedHand) > PinchThreshold;
        }

        public static bool IsTwoFingerGesture(Handedness trackedHand)
        {
            return (!HandPoseUtils.IsIndexGrabbing(trackedHand)) &&
                HandPoseUtils.IsMiddleGrabbing(trackedHand) &&
                (!HandPoseUtils.IsThumbGrabbing(trackedHand)) &&
                HandPoseUtils.RingFingerCurl(trackedHand) > PinchThreshold &&
                HandPoseUtils.PinkyFingerCurl(trackedHand) > PinchThreshold;
        }


        public static bool IsPinching(Handedness trackedHand)
        {
            return HandPoseUtils.CalculateIndexPinch(trackedHand) > PinchThreshold;
        }

        public static bool IsGrabbing(Handedness trackedHand)
        {
            return !IsPinching(trackedHand) &&
                   HandPoseUtils.MiddleFingerCurl(trackedHand) > GrabThreshold &&
                   HandPoseUtils.RingFingerCurl(trackedHand) > GrabThreshold &&
                   HandPoseUtils.PinkyFingerCurl(trackedHand) > GrabThreshold &&
                   HandPoseUtils.ThumbFingerCurl(trackedHand) > GrabThreshold;
        }
    }
}