# Generated by Django 3.1.7 on 2021-04-06 15:25

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('app', '0013_fichier_sortie'),
    ]

    operations = [
        migrations.AlterField(
            model_name='fichier',
            name='date',
            field=models.DateTimeField(auto_now_add=True),
        ),
    ]
