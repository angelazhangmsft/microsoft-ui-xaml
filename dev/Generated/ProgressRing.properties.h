// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ProgressRingProperties
{
public:
    ProgressRingProperties();

    void IsIndeterminate(bool value);
    bool IsIndeterminate();

    void StrokeThickness(double value);
    double StrokeThickness();

    static winrt::DependencyProperty IsIndeterminateProperty() { return s_IsIndeterminateProperty; }
    static winrt::DependencyProperty StrokeThicknessProperty() { return s_StrokeThicknessProperty; }

    static GlobalDependencyProperty s_IsIndeterminateProperty;
    static GlobalDependencyProperty s_StrokeThicknessProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnIsIndeterminatePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnStrokeThicknessPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
