all:
	g++ Admin.cpp BaseUser.cpp Catalog.cpp Customer.cpp OrderManager.cpp Product.cpp ShoppingCart.cpp UserManager.cpp View.cpp App.cpp -o shopApp

fileManager:
	g++ -c FileManager.cpp -o testFileManager

fmTest:
	g++ Admin.cpp BaseUser.cpp Catalog.cpp Customer.cpp OrderManager.cpp Product.cpp ShoppingCart.cpp UserManager.cpp View.cpp FileManager.cpp App.cpp -o shop_with_filedb