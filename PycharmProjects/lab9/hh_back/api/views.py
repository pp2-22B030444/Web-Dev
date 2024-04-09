from rest_framework.views import APIView
from rest_framework.response import Response
from django.shortcuts import get_object_or_404
from .models import Vacancy, Company
from .serializer import VacancySerializer


class VacancyListView(APIView):
    def get(self, request):
        vacancies =Vacancy.objects.all().values('id', 'name', 'description', 'salary', 'company_id')
        return Response({'vacancy': list(vacancies)})


class VacancyDetailView(APIView):
    def get(self, request, id):
        vacancy = get_object_or_404(Vacancy, pk=id)
        data = {
            'id': vacancy.id,
            'name': vacancy.name,
            'description': vacancy.description,
            'salary': vacancy.salary,
            'company_id': vacancy.company_id
        }
        return Response({'vacancy': data})

class VacancyTopTenView(APIView):
    def get(self, request):
        vacancies = Vacancy.objects.all().order_by('-salary')[:10]
        serializer = VacancySerializer(vacancies, many=True)
        return Response({'vacancies': serializer.data})

# class VacancyTopTenView(APIView):
#     def get(self, request):
#         vacancies = Vacancy.objects.all().order_by('-salary')[:10]
#         return Response({'vacancies': vacancies})

class CompanyListView(APIView):
    def get(self, request):
        companies = Company.objects.all().values('id', 'name', 'description', 'city', 'address')
        return Response({'companies': list(companies)})


class CompanyDetailView(APIView):
    def get(self, request, id):
        company = get_object_or_404(Company, pk=id)
        data = {'id': company.id, 'name': company.name, 'description': company.description, 'city': company.city, 'address': company.address}
        return Response({'company': data})


class CompanyVacancyView(APIView):
    def get(self, request, id):
        company = get_object_or_404(Company, pk=id)
        vacancies = company.product_set.all().values('id', 'name', 'description', 'salary', 'company_id')
        return Response({'company': company.name, 'vacancies': list(vacancies)})
