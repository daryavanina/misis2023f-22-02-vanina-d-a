#include <iostream>
#include <fstream>
#include <sstream>
#include <opencv2/opencv.hpp>
#include <poppler-document.h>
#include <poppler-page.h>
#include <poppler-page-renderer.h>
#include <poppler-image.h>
#include <vector>
#include <string>
#include <cmath>
#include <cfenv>
#include <climits>

#include <tesseract/baseapi.h>

#include <opencv2/imgcodecs.hpp>
#include <pdf2img/pdf2img.h>
#include <rectangles/rectangles.hpp>
#include <title_check/title_check.hpp>


int main(int argc, char* argv[]) {
	
	poppler::document* mypdf = poppler::document::load_from_file(argv[1]);

	if (mypdf == NULL) {
		std::cerr << "couldn't read pdf\n";
	}
	pdf2img images_from_pdf(mypdf, 300);

	std::vector<cv::Mat> doc;
	for (int i = 0; i < images_from_pdf.get_size(); i++) {
		doc.push_back(images_from_pdf[i]);
	}

	CutRectangles rectangles(doc);

	double adm = std::stod(argv[2]);
	double dpi = atof(argv[3]);
	title_check checking_title(rectangles[0], images_from_pdf[0].rows, images_from_pdf[0].cols, adm, dpi);
	std::cout << "______----_______" << '\n';
	std::cout << checking_title.get_result() << '\n';
	for (int p = 0; p < rectangles.ssize(); ++p) {
		cv::Mat tempImage;
		tempImage = doc[p];
		for (auto& i : rectangles[p]) {
			cv::rectangle(tempImage, i, cv::Scalar(0, 255, 0), 5);
		}
		cv::namedWindow("Image", cv::WINDOW_NORMAL);
		cv::imshow("Image", tempImage);
		cv::waitKey(0);
	}
}