from rest_framework.views import APIView
from rest_framework.response import Response
from django.shortcuts import get_object_or_404
from .models import Product, Category


class ProductListView(APIView):
    def get(self, request):
        products = Product.objects.all().values('id', 'name', 'price', 'description', 'count', 'is_active',
                                                'category_id')
        return Response({'products': list(products)})


class ProductDetailView(APIView):
    def get(self, request, id):
        product = get_object_or_404(Product, pk=id)
        data = {
            'id': product.id,
            'name': product.name,
            'price': str(product.price),
            'description': product.description,
            'count': product.count,
            'is_active': product.is_active,
            'category_id': product.category_id
        }
        return Response({'product': data})


class CategoryListView(APIView):
    def get(self, request):
        categories = Category.objects.all().values('id', 'name')
        return Response({'categories': list(categories)})


class CategoryDetailView(APIView):
    def get(self, request, id):
        category = get_object_or_404(Category, pk=id)
        data = {'id': category.id, 'name': category.name}
        return Response({'category': data})


class CategoryProductsView(APIView):
    def get(self, request, id):
        category = get_object_or_404(Category, pk=id)
        products = category.product_set.all().values('id', 'name', 'price', 'description', 'count', 'is_active')
        return Response({'category': category.name, 'products': list(products)})
