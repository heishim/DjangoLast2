# Generated by Django 3.1.7 on 2021-03-31 10:39

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('app', '0004_auto_20210331_1235'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='fichier',
            name='texte',
        ),
    ]
