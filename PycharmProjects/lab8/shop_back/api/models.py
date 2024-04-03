from django.db import models


class Category(models.Model):
    name = models.CharField(max_length=30)

    class Meta:
        app_label = 'api'
        verbose_name = 'Category'
        verbose_name_plural = 'Categories'

    def __init__(self, *args, **kwargs):
        super().__init__(args, kwargs)
        self.id = None

    def __str__(self):
        return f'{self.id}: {self.name}'

    def to_json_format(self):
        return {
            'id': self.id,
            'name': self.name
        }


class Product(models.Model):
    name = models.CharField(max_length=100)
    description = models.TextField()
    price = models.DecimalField(max_digits=10, decimal_places=2)
    count = models.IntegerField()
    is_active = models.BooleanField(default=True)  # default value added
    category = models.ForeignKey(Category, on_delete=models.CASCADE)

    class Meta:
        app_label = 'api'
        verbose_name = 'Product'
        verbose_name_plural = 'Products'
        ordering = ['-price']

    def __init__(self, *args, **kwargs):
        super().__init__(args, kwargs)
        self.id = None

    def __str__(self):
        return f'{self.id}: {self.name}'

    def to_json_format(self):
        return {
            'id': self.id,
            'name': self.name,
            'description': self.description,
            'price': str(self.price),  # Convert DecimalField to string
            'count': self.count,
            'is_active': self.is_active,
            'category': self.category.name
        }
