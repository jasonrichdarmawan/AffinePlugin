#include "affine_plugin.h"

QString AffinePlugin::name() const {
    return "Affine";
}

void AffinePlugin::edit(const cv::Mat &input, cv::Mat &output)
{
    cv::Point2f triangleA[3];
    cv::Point2f triangleB[3];

    // triangle A
    triangleA[0] = cv::Point2f(0, 0);
    triangleA[1] = cv::Point2f(1, 0);
    triangleA[2] = cv::Point2f(0, 1);

    // in this transformation, the top of the image will not be changed
    // while the bottom of the image will be moved right by the same distance as the image's width.
    // consequently, triangleB[2] is (1,1)
    triangleB[0] = cv::Point2f(0, 0);
    triangleB[1] = cv::Point2f(1, 0);
    triangleB[2] = cv::Point2f(1, 1);

    cv::Mat affineMatrix = cv::getAffineTransform(triangleA, triangleB);
    cv::Mat result;
    // output image size, same as input.
    cv::warpAffine(input, result, affineMatrix, input.size(), cv::INTER_CUBIC, cv::BORDER_CONSTANT);

    output = result;
}
