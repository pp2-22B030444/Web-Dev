from rest_framework import serializers
from .models import Company, Vacancy

class CompanySerializer(serializers.ModelSerializer):
    class Meta:
        model = Company
        fields = '__all__'

class VacancySerializer(serializers.ModelSerializer):
    company = CompanySerializer()  # Nested serializer to serialize company details along with vacancy

    class Meta:
        model = Vacancy
        fields = '__all__'
